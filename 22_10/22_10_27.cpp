#include <string>
#include <vector>
#include <set>

using namespace std;

/* 64064번 불량 사용자
// 해설 : 순열으로 뽑은 후 중복 제거, 중복은 SET을 이용해서 제거
// url : https://school.programmers.co.kr/learn/courses/30/lessons/64064

set<string> save; 
vector<bool> visited;

void select(vector<string> user_id, vector<string> banned_id, int cnt)
{
    if(cnt == banned_id.size())
    {
        string st;
        
        for(int i = 0 ; i < user_id.size() ; i++)
        {
            if(visited[i])
            {
                st.push_back(i);
            }
        }
        
        save.insert(st);
        return;
    }
    
    string cur_banned_id = banned_id[cnt];
    
    for(int i = 0 ; i < user_id.size() ; i++)
    {
        if(visited[i])
            continue;
        
        string cur_id = user_id[i];
        
        if(cur_id.size() != cur_banned_id.size())
            continue;
        
        bool chk = false;
        
        for(int j = 0 ; j < cur_banned_id.size() ; j++)
        {
            if(cur_banned_id[j] == '*')
                continue;
            
            if(cur_id[j] != cur_banned_id[j])
            {
                chk = true;
                break;
            }
        }
        
        if(chk)
            continue;
        
        visited[i] = true;
        select(user_id, banned_id, cnt + 1);
        visited[i] = false;
    }
}

int solution(vector<string> user_id, vector<string> banned_id) {
    int answer = 0;
    
    visited.assign(user_id.size(), false);
    select(user_id, banned_id, 0);
    
    
    return answer = save.size();
}
*/