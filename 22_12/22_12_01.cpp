#include <string>
#include <iostream>
#include <vector>

using namespace std;

/* 12909번 올바른 괄호
// 해설 : 괄호 관련된 문제를 풀다보니 이제 쉽게 해결할 수 있다., 문자열

bool solution(string s)
{
    bool answer = true;
    
    vector<char> v;
    
    for(int i = 0 ; i < s.size() ; i++)
    {
        char ch;
        ch = s[i];
        
        if(ch == '(')
        {
            v.emplace_back(ch);
        }
        
        if(ch == ')')
        {
            if(!v.empty())
                v.pop_back();
            else
                return answer = false;
        }
    }
    
    if(!v.empty())
        return answer = false;
    
    return answer;
}
*/