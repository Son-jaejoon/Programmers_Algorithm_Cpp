/* 154538번 숫자 변환하기
// 해설 : DFS
// url : https://school.programmers.co.kr/learn/courses/30/lessons/154538

#include <string>
#include <vector>

using namespace std;

vector<int> visited;

void dfs(int curr, int y, int n, int cnt)
{
    if(visited[y] < cnt)
        return;
    
    if(curr + n <= y)
    {
        if(visited[curr + n] >= cnt + 1)
        {
            visited[curr+ n] = cnt + 1;
            dfs(curr + n, y, n, cnt + 1);   
        }
    }
    
    if(curr * 2 <= y)
    {
        if(visited[curr * 2] >= cnt + 1)
        {
            visited[curr * 2] = cnt + 1;
            dfs(curr * 2, y, n, cnt + 1);   
        }
    }
    
    if(curr * 3 <= y)
    {
        if(visited[curr * 3] >= cnt + 1)
        {
            visited[curr * 3] = cnt + 1;
            dfs(curr * 3, y, n, cnt + 1);   
        }
    }
}

int solution(int x, int y, int n) {
    
    visited.assign(y + 1, 987654321);
    visited[x] = 0;
    
    dfs(x, y, n, 0);
    
    if(visited[y] == 987654321)
        return -1;
    
    return visited[y];
}
*/