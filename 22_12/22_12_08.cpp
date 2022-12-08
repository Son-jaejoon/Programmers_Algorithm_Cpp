/* 60057번 문자열 압축
// 해설 : 문자열 구현
// url : https://school.programmers.co.kr/learn/courses/30/lessons/60057

#include <string>
#include <vector>
#include <iostream>

using namespace std;

string string_compression(string s, int length)
{
    string result = "";
    
    while (length <= s.size())
    {
        string cut_str = s.substr(0, length);

        int cnt = 0;
        bool ok = true;

        while (ok)
        {
            for (int i = 0; i < length; i++)
            {
                if (s[i] != cut_str[i])
                {
                    ok = false;
                    break;
                }
            }

            if (ok)
            {
                s.erase(0, length);
                cnt++;
            }
        }

        if (cnt <= 1)
            result += cut_str;
        else
        {
            result += to_string(cnt);
            result += cut_str;
        }
    }

    if (s.size() < length && s.size() != 0)
        result += s;

    return result;
}

int solution(string s)
{
    int answer = s.size();

    for (int i = 1; i <= s.size() / 2; i++)
    {
        string result = string_compression(s, i);

        if (answer > result.size())
            answer = result.size();
    }

    return answer;
}
*/