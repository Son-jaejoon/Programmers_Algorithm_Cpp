/* 17684번 [3차] 압축
// 해설 : string, 구현

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(string msg) {
    vector<int> answer;
    
    vector<string> lzw;
    
    for (int i = 0 ; i < 26 ; i++)
    {
        string st = "";
        st = 'A' + i;
        lzw.emplace_back(st);
    }
    
    for(int i = 0 ; i < msg.size() ; i++)
    {
        string st = "";
        st = msg[i];
        
        for(int j = i ; j < msg.size() ; j++)
        {
            if(i == j)
            {
                if(j == msg.size() - 1)
                {
                    int idx = find(lzw.begin(), lzw.end(), st) - lzw.begin();
                    answer.emplace_back(idx + 1);
                    break;
                }
                else
                    continue;
            }
            
            st += msg[j];
            
            if(find(lzw.begin(), lzw.end(), st) == lzw.end())
            {
                cout << st << endl;
                lzw.emplace_back(st);
                st.pop_back();
                int idx = find(lzw.begin(), lzw.end(), st) - lzw.begin();
                answer.emplace_back(idx + 1);
                cout << idx + 1 << endl;
                i = j - 1;
                break;
            }
            else
            {
                if(j == msg.size() - 1)
                {
                    int idx = find(lzw.begin(), lzw.end(), st) - lzw.begin();
                    answer.emplace_back(idx + 1);
                    
                    i = j;
                    break;
                }
                else
                    continue;   
            }
        }
    }
    return answer;
}

*/