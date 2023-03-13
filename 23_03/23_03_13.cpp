
/* 43164번 여행경로
// 해설 : dfs
// url : https://school.programmers.co.kr/learn/courses/30/lessons/43164

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> answer;

bool cmp(vector<string> &a, vector<string> &b)
{
    if(a[0] == b[0])
        return a[1] < b[1];
    
    return a[0] < b[0];
}

bool dfs(vector<vector<string>> tickets, vector<bool> visited, string curr_airport)
{
    answer.emplace_back(curr_airport);
    
    if(answer.size() == tickets.size() + 1)
        return true;
    
    for(int i = 0 ; i < tickets.size() ; i++)
    {
        if(visited[i] || tickets[i][0] != curr_airport)
            continue;
        
        visited[i] = true;
        
        bool chk = dfs(tickets, visited, tickets[i][1]);
        
        if(chk)
            return true;
        
        visited[i] = false;
    }
    
    answer.pop_back();
    return false;
}


vector<string> solution(vector<vector<string>> tickets) {
    vector<bool> visited(tickets.size(), false);
    
    sort(tickets.begin(), tickets.end(), cmp);
    dfs(tickets, visited, "ICN");
    
    return answer;
}
*/