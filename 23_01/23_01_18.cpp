/* 86971번 전력망을 둘로 나누기
// 해설 : 완전 탐색
// url : https://school.programmers.co.kr/learn/courses/30/lessons/86971

#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> v[101];

int dfs(int a, vector<bool> visited)
{
    int cnt = 0;
    
    queue<int> q;
    q.emplace(a);
    
    while(!q.empty())
    {
        cnt++;
        int idx = q.front();
        q.pop();
        
        for(int i = 0 ; i < v[idx].size() ; i++)
        {
            int next = v[idx][i];
            
            if(visited[next])
                continue;
            
            visited[next] = true;
            q.emplace(next);
        }
    }
    
    return cnt;
}

int solution(int n, vector<vector<int>> wires) {
    int answer = 987654321;
    
    for(int i = 0 ; i < wires.size() ; i++)
    {
        int a = wires[i][0];
        int b = wires[i][1];
        
        v[a].emplace_back(b);
        v[b].emplace_back(a);
    }
    
    vector<bool> visited;
    visited.assign(n + 1, false);
    
    for(int i = 0 ; i < wires.size() ; i++)
    {
        int a = wires[i][0];
        int b = wires[i][1];
        visited[a] = true;
        visited[b] = true;
        
        answer = min(answer, abs(dfs(a, visited) - dfs(b, visited)));
        visited[a] = false;
        visited[b] = false;
    }
    
    return answer;
}
*/