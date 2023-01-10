/* 42583번 다리를 지나는 트럭
// 해설 : 구현
// url : https://school.programmers.co.kr/learn/courses/30/lessons/42583

#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int in_bridge = 0;
    int idx = 0;
    
    queue<int> q;
    
    while(1)
    {
        answer++;
        
        if(q.size() == bridge_length)
        {
            in_bridge -= q.front();
            q.pop();
        }
        
        if(in_bridge + truck_weights[idx] <= weight)
        {
            if(idx + 1 == truck_weights.size())
            {
                answer += bridge_length;
                break;    
            }
            
            q.emplace(truck_weights[idx]);
            in_bridge += truck_weights[idx];
            idx++;
        }
        else
            q.emplace(0);
    }
    
    return answer;
}
*/