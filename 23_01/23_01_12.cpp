/* 42861번 섬 연결하기
// 해설 : 그리디, 크루스칼 알고리즘
// url : https://school.programmers.co.kr/learn/courses/30/lessons/42861

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> parent;

bool cmp(vector<int> &a, vector<int> &b)
{
    return a[2] < b[2];
}

int find_parent(int a)
{
    if(parent[a] < 0)
        return a;
    
    return parent[a] = find_parent(parent[a]);
}

int solution(int n, vector<vector<int>> costs) {
    int answer = 0;
    parent.assign(n, -1);
    
    sort(costs.begin(), costs.end(), cmp);
    
    for(int i = 0 ; i < costs.size() ; i++)
    {
        int a = find_parent(costs[i][0]);
        int b = find_parent(costs[i][1]);
        int cost = costs[i][2];
        
        if(a != b)
        {
            answer += cost;
            parent[b] = a;
        }
    }
    
    return answer;
}
*/