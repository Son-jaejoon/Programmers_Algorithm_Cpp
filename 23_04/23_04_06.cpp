/* 120956번 옹알이 (1)
// 해설 : 구현
// url : https://school.programmers.co.kr/learn/courses/30/lessons/120956

#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = babbling.size();
    
    for(string st : babbling)
    {
        for(int i = 0 ; i < st.size() ; i++)
        {
            if(st[i] == 'a')
            {
                if(st.substr(i, 3) != "aya")
                {
                    answer -=1;
                    break;
                }
                
                i += 2;
            }
            else if(st[i] == 'y')
            {
                if(st.substr(i, 2) != "ye")
                {
                    answer -= 1;
                    break;
                }
                
                i += 1;
            }
            else if(st[i] == 'w')
            {
                if(st.substr(i, 3) != "woo")
                {
                    answer -= 1;
                    break;
                }
                
                i += 2;
            }
            else if(st[i] == 'm')
            {
                if(st.substr(i, 2) != "ma")
                {
                    answer -= 1;
                    break;
                }
                
                i += 1;
            }
            else
            {
                answer -= 1;
                break;
            }
        }
    }
    
    return answer;
}
*/