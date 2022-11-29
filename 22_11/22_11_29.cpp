/* 60058번 괄호 변환
// 해설 : 구현
// url : https://school.programmers.co.kr/learn/courses/30/lessons/60058

#include <string>
#include <vector>

using namespace std;

bool is_right(string str)
{
    if(!str.size())
        return true;
    
    vector<char> v;
    
    if(str[0] == ')')
        return false;
    else
        v.emplace_back(str[0]);
    
    for(int i = 1; str[i]; i++)
    {
        if(str[i] == ')')
        {
            if(v.empty())
                return false;
            
            v.pop_back();
        }
        else if(str[i] == '(')
            v.emplace_back('(');
    }
    
    if (v.empty())
        return true;
    else
        return false;
}

string make_str(string u)
{
    if (u.size() <= 2)
        return "";
    
    string ret = "";
    
    for (int i = 1; i < u.size() - 1; i++)
    {
        ret += (u[i] == '(' ? ')' : '(');
    }
    
    return ret;
}

string recur(string p)
{
    if (p.size())
    {
        int cnt = (p[0] == '(' ? 1 : -1);
        int off = 1;
        
        while(cnt) 
        {
            cnt += (p[off++] == '(' ? 1 : -1);
        }
        
        string u = p.substr(0, off);
        string v = p.substr(off);
        
        if (is_right(u))
            return u + recur(v);
        else
            return '(' + recur(v) + ')' + make_str(u);
    }
    
    return "";
}

string solution(string p)
{
    return recur(p);
}

*/