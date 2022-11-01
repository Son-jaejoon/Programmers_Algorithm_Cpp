#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

/* 67259번 경주로 건설 1번 풀이
// 해설 : DFS, DP로 풀었으나 테스트 케이스 2개가 풀리지 않아 BFS로 재풀이
// url : https://school.programmers.co.kr/learn/courses/30/lessons/67259#

int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

vector<vector<int>> dp;
int N;

void dfs(vector<vector<int>> board, vector<vector<bool>> visited, int y, int x, int dir, int value)
{
    if(dp[y][x] >= value)
        dp[y][x] = value;
    else
        return;
    
    if(y == N - 1 && x == N - 1)
        return;
    
    for(int i = 0 ; i < 4 ; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        
        if(ny < 0 || nx < 0 || ny >= N || nx >= N)
            continue;
        
        if(visited[ny][nx])
            continue;
        
        if(board[ny][nx] == 1)
            continue;
        
        visited[ny][nx] = true;
        
        if(dir == 0 || dir == 1)
        {
            if(i == 0 || i == 1)
                dfs(board,visited, ny, nx, i, dp[y][x] + 100);
            else
                dfs(board, visited, ny , nx, i, dp[y][x] + 100 + 500);
        }
        else if(dir == 2 || dir == 3)
        {
            if(i == 2 || i == 3)
                dfs(board,visited, ny, nx, i, dp[y][x] + 100);
            else
                dfs(board, visited, ny , nx, i, dp[y][x] + 100 + 500);
        }
        
        visited[ny][nx] = false;
    }
    
    return;
}

int solution(vector<vector<int>> board) {
    N = board.size();
    
    vector<vector<bool>> visited;
    visited.assign(N, vector<bool>(N, false));
    dp.assign(N, vector<int>(N, 987654321));
    visited[0][0] = true;
    
    for(int i = 0 ; i < 4 ; i++)
    {
        int ny = dy[i];
        int nx = dx[i];
        
        if(ny < 0 || nx < 0 || ny >= N || nx >= N)
            continue;
        
        if(visited[ny][nx])
            continue;
        
        if(board[ny][nx] == 1)
            continue;
        
        visited[ny][nx] = true;
        dfs(board, visited, ny, nx, i, 100);
        visited[ny][nx] = false;
    }
    return dp[N-1][N-1];
}
*/

/* 67259번 경주로 건설 2번 풀이
// 해설 : BFS, DP 해결, 해당 경로에서의 방향값을 추가하는 것이 틀린 이유 였음.

int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

struct info
{
    int y, x, dir, cost;
};

info create(int y, int x, int dir, int cost)
{
    info n_info;
    
    n_info.y = y;
    n_info.x = x;
    n_info.dir = dir;
    n_info.cost = cost;
    
    return n_info;
}

int solution(vector<vector<int>> board) {
    int answer = 987654321;
    
    int N = board.size();
    vector<vector<vector<int>>> dp;
    
    dp.assign(N, vector<vector<int>>(N, vector<int>(4, 987654321)));
    
    queue<info> q;
    q.emplace(create(0, 0, 4, 0));
    
    while(!q.empty())
    {
        int y = q.front().y;
        int x = q.front().x;
        int dir = q.front().dir;
        int cost = q.front().cost;
        q.pop();
        
        if(y == N - 1 && x == N - 1)
        {
            answer = min(answer, cost);
            continue;
        }
        
        for(int i = 0 ; i < 4 ; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            int add_cost = 100;
            
            if(ny < 0 || nx < 0 || ny >= N || nx >= N)
                continue;
            
            if(board[ny][nx] == 1)
                continue;
            
            if(dir == 0 || dir == 1)
            {
                if(!(i == 0 || i == 1))
                {
                    add_cost += 500;
                }
            }
            else if(dir == 2 || dir == 3)
            {
                if(!(i == 2 || i == 3))
                {
                    add_cost += 500;
                }
            }
            
            if(dp[ny][nx][i] >= cost + add_cost)               
            {
                dp[ny][nx][i] = cost + add_cost;
                q.emplace(create(ny, nx, i, cost + add_cost));
            }
        }
    }
        
    return answer;
}
*/