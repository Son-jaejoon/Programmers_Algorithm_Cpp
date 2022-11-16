/* 49993번 스킬트리
// 해설 : map, 구현

#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    map<char, int> m;
    
    for(int i = 0 ; i < skill.size() ; i++)
    {
        char s = skill[i];
        m.insert(make_pair(s, i + 1));
    }
    
    vector<bool> chk;
    chk.assign(skill.size() + 1, false);
                 
    for(auto st : skill_trees)
    {
        for(int i = 0 ; i < chk.size() ; i++)
            chk[i] = false;
        
        bool ok = true;
        
        for(int i = 0 ; i < st.size() ; i++)
        {
            if (skill.find(st[i]) == string::npos)
                continue;
            
            int idx = m[st[i]];
            if(idx == 1)
                chk[idx] = true;
            else
            {
                if(chk[idx - 1])
                    chk[idx] = true;
                else
                {
                    ok = false;
                    break;
                }
            }
        }
        
        if(ok)
            answer++;
    }
    
    return answer;
}
*/