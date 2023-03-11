/* 131704번 택배상자
// 해설 : 1번 풀이 | deque 활용, 구현
// url : https://school.programmers.co.kr/learn/courses/30/lessons/131704

#include <string>
#include <vector>
#include <deque>
using namespace std;

int solution(vector<int> order) {
    int answer = 0;
    
    deque<int> tmp;
    deque<int> truck;
    
    for(int i = 1 ; i <= order.size() ; i++)
    {
        truck.emplace_back(i);
    }
    
    for(int i = 0 ; i < order.size() ; i++)
    {
        int curr_box = order[i];
        
        while(1)
        {
            if(!truck.empty() && curr_box == truck.front())
            {
                answer++;
                truck.pop_front();
                break;
            }
            else if(!tmp.empty() && curr_box == tmp.back())
            {
                answer++;
                tmp.pop_back();
                break;
            }
            else
            {
                if(truck.empty())
                    return answer;
                
                tmp.emplace_back(truck.front());
                truck.pop_front();
            }
        }
    }
    
    return answer;
}
*/

/* 2번째 풀이
// 해설 : deque를 통해 더 간단하게 구현할 수 있었다..

int solution(vector<int> order) {
    int answer = 0;
    
    deque<int> truck;
    
    for(int i = 1 ; i <= order.size() ; i++)
    {
        truck.emplace_back(i);
        
        while(!truck.empty() && order[answer] == truck.back())
        {
            answer++;
            truck.pop_back();
        }
    }
    
    return answer;
}
*/