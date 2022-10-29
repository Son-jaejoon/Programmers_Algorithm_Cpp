#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/* 64062번 징검다리 건너기 1번 풀이
// 해설 : 완전탐색으로 풀었을 시 시간초과로 인해 정답이 아니었음.
// 이를 해결하기 위하여 어떻게 해야될까 고민을 하던 중 점프를 하는 것이 0보다 작은 돌의 연속 갯수를 세는 것이라는 걸 깨닫고
// 그렇게 해보기로 함.
// url : https://school.programmers.co.kr/learn/courses/30/lessons/64062

int solution(vector<int> stones, int k) {
    int answer = 0;
    
    bool chk = true;
    
    int min = *min_element(stones.begin(), stones.end());
    
    answer = min;
    
    for(int i = 0 ; i < stones.size() ; i++)
    {
        stones[i] -= min;
    }
    
    while(chk)
    {
        bool end = false;
        bool clear = true;
        
        for(int i = 0 ; i < stones.size() ; i++)
        {    
            if(end)
                break;
            
            if(!clear)
                break;
            
            if(stones[i] > 0)
            {
                stones[i] -= 1;
                continue;
            }
            else
            {
                int jump = 1;
                
                while(jump < k)
                {
                    if(i + jump >= stones.size())
                    {
                        end = true;
                        break;    
                    }
                    
                    if(stones[i + jump] > 0)
                    {
                        i = i + jump - 1;
                        break;
                    }
                    
                    if(jump == k - 1)
                    {
                        clear = false;
                        chk = false;
                        return answer;
                    }
                    
                    jump++;
                }
            }
        }
        
        if(clear)
            answer++;
        else
            return answer;
    }
    
    return answer;
}

*/

/* 2번 풀이
// 해설 : 1 ~ 최대값 을 이분 탐색으로 탐색하여 0 이하의 연속된 갯수가 K개 이상일 경우 실패
// 시간 효율을 nlogn으로 바꿧다.

bool jump(vector<int> stones, int k, int player)
{
    int cnt = 0;
    
    for(int i = 0 ; i < stones.size() ; i++)
    {
        if(stones[i] - player <= 0)
        {
            cnt++;
        }
        else
        {
            cnt = 0;
        }
        
        if(cnt >= k)
            return false;
    }
    
    return true;
}

int solution(vector<int> stones, int k) {
    int answer = 0;
    
    int lo = 0, hi = *max_element(stones.begin(), stones.end());
    
    while(lo <= hi)
    {
        int mid = (lo + hi)/2;
        
        if(jump(stones, k, mid))
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    
    return answer = lo;
}
*/