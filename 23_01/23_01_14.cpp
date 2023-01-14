/* 49189번 가장 먼 노드
// 해설 : 그래프, 구현
// url : https://school.programmers.co.kr/learn/courses/30/lessons/49189

#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(int n, vector<vector<int>> edge) {
    int answer = 0;
    
    vector<int> connect[n + 1];
    vector<bool> visited(n + 1, false);
    vector<int> result;
    
    for(int i = 0 ; i < edge.size() ; i++)
    {
        int a = edge[i][0];
        int b = edge[i][1];
        
        connect[a].emplace_back(b);
        connect[b].emplace_back(a);
    }
    
    queue<pair<int, int>> q;
    q.emplace(make_pair(1, 0));
    visited[1] = true;
    
    while(!q.empty())
    {
        int curr_node = q.front().first;
        int cnt = q.front().second;
        q.pop();
        
        bool chk = true;
        
        for(int i = 0 ; i < connect[curr_node].size() ; i++)
        {
            int next_node = connect[curr_node][i];
            
            if(visited[next_node])
                continue;
            
            visited[next_node] = true;
            chk = true;
            q.emplace(make_pair(next_node, cnt + 1));
        }
        
        if(chk)
        {
            result.emplace_back(cnt);
        }
    }
    
    int max_dist = *max_element(result.begin(), result.end());
    answer = count(result.begin(), result.end(), max_dist);
    
    return answer;
}
*/