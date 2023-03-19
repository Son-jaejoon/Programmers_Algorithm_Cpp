/* 154540번 무인도 여행
// 해설 : bfs
// url : https://school.programmers.co.kr/learn/courses/30/lessons/154540

#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <iostream>
using namespace std;

int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

vector<vector<bool>> visited;

int bfs(vector<string> maps, int start_y, int start_x)
{
    int cnt = maps[start_y][start_x] - '0';
    
    queue<pair<int, int>> q;
    q.emplace(make_pair(start_y, start_x));
    visited[start_y][start_x] = true;
    
    while(!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        
        for(int dir = 0 ; dir < 4 ; dir++)
        {
            int ny = y + dy[dir];
            int nx = x + dx[dir];
            
            if(ny < 0 || nx < 0 || ny >= maps.size() || nx >= maps[0].size())
                continue;
            
            if(maps[ny][nx] == 'X')
                continue;
            
            if(visited[ny][nx])
                continue;
            
            visited[ny][nx] = true;
            q.emplace(make_pair(ny, nx));
            cnt += (maps[ny][nx] - '0');
        }
    }
    return cnt;
}

vector<int> solution(vector<string> maps) {
    vector<int> answer;
    
    visited.assign(maps.size(), vector<bool>(maps[0].size(), false));
    
    for(int i = 0 ; i < maps.size() ; i++)
    {
        for(int j = 0 ; j < maps[i].size() ; j++)
        {
            if(maps[i][j] == 'X' || visited[i][j])
                continue;
            
            answer.emplace_back(bfs(maps, i, j));
        }
    }
    
    if(answer.empty())
        answer.emplace_back(-1);
    else
        sort(answer.begin(), answer.end());
    
    return answer;
}
*/