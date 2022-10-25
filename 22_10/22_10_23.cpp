#include <string>
#include <vector>

using namespace std;

/* 81301번 숫자 문자열과 영단어
// 해설 : 문자열 관리
// url : https://school.programmers.co.kr/learn/courses/30/lessons/81301
*/

int solution(string s) {
    int answer = 0;
    string st;
    
    for(int i = 0 ; i < s.size() ; i++)
    {
        char c = s[i];
        
        if(c == 'z')
        {
            st += '0';
            i += 3;
        }
        else if(c == 'o')
        {
            st += '1';
            i += 2;
        }
        else if(c == 't')
        {
            if(s[i + 2] == 'o')
            {
                st += '2';
                i += 2;
            }
            else
            {
                st += '3';
                i += 4;
            }
        }
        else if(c == 'f')
        {
            if(s[i + 3] == 'r')
            {
                st += '4';
            }
            else
            {
                st += '5';
            }
            
            i += 3;
        }
        else if(c == 's')
        {
            if(s[i + 2] == 'x')
            {
                st += '6';
                i += 2;
            }
            else
            {
                st += '7';
                i += 4;
            }
        }
        else if(c == 'e')
        {
            st += '8';
            i += 4;
        }
        else if(c == 'n')
        {
            st += '9';
            i += 3;
        }
        else
        {
            st += c;
        }
    }
    
    answer = stoi(st);
    return answer;
}