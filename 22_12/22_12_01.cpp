#include <string>
#include <iostream>
#include <vector>

using namespace std;

/* 12909�� �ùٸ� ��ȣ
// �ؼ� : ��ȣ ���õ� ������ Ǯ�ٺ��� ���� ���� �ذ��� �� �ִ�., ���ڿ�

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