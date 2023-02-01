/* 42628번 이중우선순위큐
// 해설 : 우선순위큐
// url : https://school.programmers.co.kr/learn/courses/30/lessons/42628

#include <string>
#include <vector>
#include <iostream>
#include <queue>
#include <string>

using namespace std;

vector<int> solution(vector<string> operations)
{
    vector<int> answer;
    priority_queue<int, vector<int>, greater<int>> pq_asc;
    priority_queue<int, vector<int>> pq_des;
    
    int cnt = 0;
    
    for(auto op : operations)
    {
        if(!cnt)
        {
            while(!pq_asc.empty()) pq_asc.pop();
            while(!pq_des.empty()) pq_des.pop();
        }
        
        if(op[0] == 'I')
        {
            pq_des.push(stoi(op.substr(2)));
            pq_asc.push(stoi(op.substr(2)));
            cnt++;
        }
        else
        {
            if(!cnt) continue;
            
            if(op[2] == '1')
            {
                pq_des.pop();
                cnt--;
            }
            else
            {
                pq_asc.pop();
                cnt--;
            }
        }
        
    }
    
    if(cnt)
    {
        answer.emplace_back(pq_des.top());
        answer.emplace_back(pq_asc.top());
    }
    else
    {
        answer.resize(2, 0);
    }
    
    return answer;
}
*/