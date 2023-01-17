/* 42883번 큰 수 만들기
// 해설 : deque
// url : https://school.programmers.co.kr/learn/courses/30/lessons/42883

#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    
    int want_size = number.size() - k;
    
    deque<char> dq;
    
    for(int i = 0 ; i < number.size() ; i++)
    {
        char curr_ch = number[i];
        
        while(!dq.empty() && k > 0)
        {
            char top_ch = dq.front();
            
            if(top_ch < curr_ch)
            {
                dq.pop_front();
                k--;
            }
            else
                break;
        }
        
        dq.emplace_front(curr_ch);
    }
    
    while(dq.size() != want_size)
        dq.pop_front();
    
    while(!dq.empty())
    {
        answer += dq.front();
        dq.pop_front();
    }
    
    reverse(answer.begin(), answer.end());
    
    return answer;
}
*/