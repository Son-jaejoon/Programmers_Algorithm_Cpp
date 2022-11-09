/* 76502번 괄호 회전하기 1번풀이
// 해설 : TC 14번을 통과 못해 생각해보니 [(]) 같은 걸 체크를 못한다.


#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    int chk_1, chk_2, chk_3;
    // () [] {}
    
    for(int i = 0 ;i < s.size() ; i++)
    {
        chk_1 = chk_2 = chk_3 = 0;
        
        for(int j = 0 ; j < s.size() ; j++)
        {
            if(s[j] == '(')
            {
                chk_1 += 1;
            }
            else if(s[j] == ')')
            {
                if(chk_1 <= 0)
                {
                    chk_1 -= 1;
                    break;
                }
                
                chk_1 -= 1;
            }
            else if(s[j] == '[')
            {
                chk_2 += 1;
            }
            else if(s[j] == ']')
            {
                if(chk_2 <= 0)
                {
                    chk_2 -= 1;
                    break;
                }
                
                chk_2 -= 1;
            }
            else if(s[j] == '{')
            {
                chk_3 += 1;
            }
            else if(s[j] == '}')
            {
                if(chk_3 <= 0)
                {
                    chk_3 -= 1;
                    break;   
                }
                
                chk_3 -= 1;
            }
        }
        
        if(chk_1 == 0 && chk_2 == 0 && chk_3 == 0)
            answer++;
        
        char tmp;
        
        for(int j = 0 ; j < s.size() - 1; j++)
        {
            tmp = s[j];
            s[j] = s[j + 1];
            s[j + 1] = tmp;
        }
    }
    
    return answer;
}
*/

/* 2번풀이
// 해설 : vector를 이용해 열린 괄호를 넣고, 닫힌 괄호가 나왓을때 pop시킨다.
// 만일 마지막 원소가 닫힌 괄호와 쌍을 이루지 못한다면 false로 계산하였다.

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    for(int i = 0 ; i < s.size() ; i++)
    {
        bool chk = true;
        
        vector<char> save;
        
        for(int j = 0 ; j < s.size() ; j++)
        {
            if(s[j] == '(')
            {
                save.emplace_back(s[j]);
            }
            else if(s[j] == ')')
            {
                if(find(save.begin(), save.end(), '(') == save.end())
                {
                    chk = false;
                    break;
                }
                
                if(save.back() != '(')
                {
                    chk = false;
                    break;
                }
                
                save.pop_back();
            }
            else if(s[j] == '[')
            {
                save.emplace_back(s[j]);
            }
            else if(s[j] == ']')
            {
                if(find(save.begin(), save.end(), '[') == save.end())
                {
                    chk = false;
                    break;
                }
                
                if(save.back() != '[')
                {
                    chk = false;
                    break;
                }
                
                save.pop_back();
            }
            else if(s[j] == '{')
            {
                save.emplace_back(s[j]);
            }
            else if(s[j] == '}')
            {
                if(find(save.begin(), save.end(), '{') == save.end())
                {
                    chk = false;
                    break;
                }
                
                if(save.back() != '{')
                {
                    chk = false;
                    break;
                }
                
                save.pop_back();
            }
        }
        
        if(chk && save.size() == 0)
            answer += 1;
        
        char tmp;
        
        for(int j = 0 ; j < s.size() - 1; j++)
        {
            tmp = s[j];
            s[j] = s[j + 1];
            s[j + 1] = tmp;
        }
    }
    
    return answer;
}
*/