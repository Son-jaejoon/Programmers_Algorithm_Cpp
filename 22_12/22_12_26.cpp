/* 43162번 네트워크
// 해설 : bfs
// url : https://school.programmers.co.kr/learn/courses/30/lessons/43162

#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<bool> visited;

void bfs(int start, vector<vector<int>> computers)
{
    queue<int> q;
    q.emplace(start);
    visited[start] = true;
    
    while(!q.empty())
    {
        int curr = q.front();
        q.pop();
        
        for(int next = 0 ; next < computers[curr].size() ; next++)
        {
            int value = computers[curr][next];
            
            if(visited[next] || value != 1)
                continue;
            
            visited[next] = true;
            q.emplace(next);
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    visited.assign(n, false);
    
    for(int i = 0 ; i < computers.size() ; i++)
    {
        if(visited[i])
            continue;
        
        bfs(i, computers);
        answer++;
    }
    
    return answer;
}
*/