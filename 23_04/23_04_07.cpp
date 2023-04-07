/* 120907번 OX퀴즈
// 해설 : 구현
// url : https://school.programmers.co.kr/learn/courses/30/lessons/120907

#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    
    int first_num = 0;
    int second_num = 0;
    int result = 0;
    int idx = 0;
    
    for(string st : quiz)
    {
        idx = 0;
        
        for(int i = 1 ; i < st.size() ; i++)
        {
            if(idx == 0 && (st[i] == '-' || st[i] == '+'))
            {
                idx = i;
                first_num = stoi(st.substr(0, idx));
            }
            else if(st[i] == '=')
            {
                second_num = stoi(st.substr(idx + 1, i - idx));
                result = stoi(st.substr(i + 1));
                break;
            }
        }
        
        if(st[idx] == '-')
        {
            if(result == first_num - second_num)
                answer.emplace_back("O");
            else
                answer.emplace_back("X");
        }
        else
        {
            if(result == first_num + second_num)
                answer.emplace_back("O");
            else
                answer.emplace_back("X");
        }
    }
    
    return answer;
}
*/