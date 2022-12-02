/* 12978번 배달
// 해설 : 다익스트라 알고리즘
// url : https://school.programmers.co.kr/learn/courses/30/lessons/12978

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<pair<int, int>> v[51];
    
int solution(int N, vector<vector<int> > road, int K) {
    int answer = 0;
    
    for(int i = 0 ; i < road.size() ; i++)
    {
        int a, b, c;
        a = road[i][0];
        b = road[i][1];
        c = road[i][2];
        
        v[a].emplace_back(make_pair(b, c));
        v[b].emplace_back(make_pair(a, c));
    }
    
    vector<int> dist;
    dist.assign(N + 1, 987654321);
    dist[1] = 0;
    
    priority_queue<pair<int, int>> pq;
    pq.emplace(make_pair(1, 0));
    
    while(!pq.empty())
    {
        int curr = pq.top().first;
        int total = -pq.top().second;
        pq.pop();
        
        if(dist[curr] < total)
            continue;
        
        for(int i = 0 ; i < v[curr].size() ; i++)
        {
            int next = v[curr][i].first;
            int cost = total + v[curr][i].second;
            
            if(dist[next] > cost)
            {
                dist[next] = cost;
                pq.emplace(make_pair(next, -dist[next]));
            }
        }
    }
    
    for(int i = 1 ; i <= N ; i++)
    {
        if(dist[i] <= K)
            answer++;
    }
    
    return answer;
}

*/