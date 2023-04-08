/* 92343번 양과 늑대 
// 해설 : 그래프
// url : https://school.programmers.co.kr/learn/courses/30/lessons/92343

#include <string>
#include <vector>
#include <set>

using namespace std;

int answer;
vector<int> v[17];

void setting(vector<vector<int>> edges)
{
    for(int i = 0 ; i < edges.size() ; i++)
    {
        v[edges[i][0]].emplace_back(edges[i][1]);  
    }
}

void dfs(vector<int> info, set<int> s, int node, int a, int b)
{
    if(info[node])
        b++;
    else
        a++;
    
    if(b >= a)
        return;
    
    s.erase(node);
    
    answer = max(answer, a);
    
    for(int next_node : v[node])
        s.insert(next_node);
    
    for(int next_node : s)
        dfs(info, s, next_node, a, b);
}

int solution(vector<int> info, vector<vector<int>> edges) {    
    setting(edges);
    dfs(info, {0}, 0, 0, 0);
    return answer;
}
*/