#include <string>
#include <algorithm>
#include <vector>

using namespace std;

/* 64065번 튜플
// 해설 : 문자 하나씩 계산하기. 어렵네..
// url : https://school.programmers.co.kr/learn/courses/30/lessons/64065
*/

bool cmp(vector<int> a, vector<int> b)
{
    return a.size() < b.size();
}

bool visited[100001];

vector<int> solution(string s) {
    vector<int> answer;
    //bool visited[100001] = {};
    vector<vector<int>> save;
    vector<int> num;
    
    string st;
    bool chk = false;
    
    for(int i = 1 ; i < s.size() - 1 ; i++)
    {
        if(!chk && s[i] == '{')
        {
            chk = true;
        }
        else if(chk && s[i] >= '0' && s[i] <= '9')
        {
            st.push_back(s[i]);
        }
        else if(chk && s[i] == ',')
        {
            num.emplace_back(stoi(st));
            st = "";
        }
        else if(chk && s[i] == '}')
        {
            num.emplace_back(stoi(st));
            save.emplace_back(num);
            st = "";
            num.clear();
            chk = false;
        }
    }
    
    sort(save.begin(), save.end(), cmp);
    
    for(int i = 0 ; i < save.size() ; i++)
    {
        for(int j = 0 ; j < save[i].size() ; j++)
        {
            if(!visited[save[i][j]])
            {
                visited[save[i][j]] = true;
                answer.emplace_back(save[i][j]);
            }
        }
    }
    
    return answer;
}