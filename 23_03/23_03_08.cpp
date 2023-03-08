/* 154539번 뒤에 있는 큰수 찾기
// 해설 : 스택 구현, 아이디어 생각해내는게 어려웠다..
// url : https://school.programmers.co.kr/learn/courses/30/lessons/154539

#include <string>
#include <vector>
#include <deque>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    answer.assign(numbers.size(), -1);
    
    deque<pair<int, int>> dq;
    
    for(int i = 0 ; i < numbers.size() ; i++)
    {
        int curr_num = numbers[i];
        
        while(!dq.empty())
        {
            int num = dq.back().first;
            int idx = dq.back().second;
            
            if(num >= curr_num)
                break;
            
            answer[idx] = curr_num;
            dq.pop_back();
        }
        
        dq.emplace_back(make_pair(curr_num, i));
    }
    return answer;
}
*/