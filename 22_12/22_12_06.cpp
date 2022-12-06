/* 72413번 합승 택시 요금
// 해설 : 플로이드 워셜 활용
// url : https://school.programmers.co.kr/learn/courses/30/lessons/72413

#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> dist;

void setting(int n, vector<vector<int>> fares)
{
    dist.assign(n + 1, vector<int>(n + 1, 987654321));
    
    for(int i = 0 ; i < fares.size() ; i++)
    {
        int start = fares[i][0];
        int end = fares[i][1];
        int cost = fares[i][2];
        
        dist[start][end] = cost;
        dist[end][start] = cost;
    }
}

void floyd_warshall(int n)
{   
    for(int i = 1 ; i <= n ; i++)
    {
        dist[i][i] = 0;
    }
    
    for(int k = 1 ; k <= n ; k++)
    {
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1 ; j <= n ; j++)
            {
                if(dist[i][j] > dist[i][k] + dist[k][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
}

int calculate(int n , int s, int a, int b)
{
    int separately_go = dist[s][a] + dist[s][b];
    int together_go = 987654321;
    
    for(int i = 1 ; i <= n ; i++)
    {
        if(dist[s][i] == 987654321 || dist[i][a] == 987654321 || dist[i][b] == 987654321)
            continue;
        
        if(together_go > dist[s][i] + dist[i][a] + dist[i][b])
            together_go = dist[s][i] + dist[i][a] + dist[i][b];
    }
    
    if(separately_go < together_go)
        return separately_go;
    
    return together_go;
}

int solution(int n, int s, int a, int b, vector<vector<int>> fares) {
    int answer = 0;
    
    setting(n, fares);
    floyd_warshall(n);
    answer = calculate(n, s, a, b);
    
    return answer;
}
*/