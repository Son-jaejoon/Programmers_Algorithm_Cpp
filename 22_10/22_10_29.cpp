#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/* 64062�� ¡�˴ٸ� �ǳʱ� 1�� Ǯ��
// �ؼ� : ����Ž������ Ǯ���� �� �ð��ʰ��� ���� ������ �ƴϾ���.
// �̸� �ذ��ϱ� ���Ͽ� ��� �ؾߵɱ� ����� �ϴ� �� ������ �ϴ� ���� 0���� ���� ���� ���� ������ ���� ���̶�� �� ���ݰ�
// �׷��� �غ���� ��.
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

/* 2�� Ǯ��
// �ؼ� : 1 ~ �ִ밪 �� �̺� Ž������ Ž���Ͽ� 0 ������ ���ӵ� ������ K�� �̻��� ��� ����
// �ð� ȿ���� nlogn���� �مf��.

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