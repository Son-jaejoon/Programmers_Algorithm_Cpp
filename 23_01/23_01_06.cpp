/* 1844번 게임 맵 최단거리
// 해설 : BFS
// url : https://school.programmers.co.kr/learn/courses/30/lessons/1844

#include<vector>
#include<queue>
#include<iostream>

using namespace std;

struct info
{
    int y, x, cnt;
};

info create(int y, int x, int cnt)
{
    info n_info;
    
    n_info.y = y;
    n_info.x = x;
    n_info.cnt = cnt;
    
    return n_info;
}

int solution(vector<vector<int> > maps)
{
    int answer = 10001;
    int N = maps.size() - 1;
    int M = maps[0].size() - 1;
    
    vector<vector<bool>> visited;
    
    visited.assign(N + 1, vector<bool>(M + 1, false));
    
    int dy[] = {-1, 1, 0, 0};
    int dx[] = {0, 0, -1, 1};
    
    queue<info> q;
    q.emplace(create(0, 0, 1));
    visited[0][0] = true;
    
    while(!q.empty())
    {
        int y = q.front().y;
        int x = q.front().x;
        int cnt = q.front().cnt;
        q.pop();

        for(int i = 0 ; i < 4 ; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            
            if(ny < 0 || nx < 0 || ny > N || nx > M)
                continue;
            
            if(visited[ny][nx])
                continue;
            
            if(maps[ny][nx] == 0)
                continue;
            
            if(ny == N && nx == M)
            {
                cout << cnt + 1 << endl;
                
                if(answer > cnt + 1)
                    answer = cnt + 1;

                continue;
            }
            
            visited[ny][nx] = true;
            q.emplace(create(ny, nx, cnt + 1));
        }
    }
    
    if(answer == 10001)
        answer = -1;
    
    return answer;
}
*/