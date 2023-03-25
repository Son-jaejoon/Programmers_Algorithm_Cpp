/* 1829번 카카오프렌즈 컬러링북
// 해설 : bfs
// url : https://school.programmers.co.kr/learn/courses/30/lessons/1829

#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<vector<bool>> visited;

int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

int bfs(int m, int n, vector<vector<int>> &picture, int start_y, int start_x, int color)
{
    int cnt = 1;
    
    queue<pair<int, int>> q;
    q.emplace(make_pair(start_y, start_x));
        
    while(!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        
        for(int i = 0 ; i < 4 ; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            
            if(ny < 0 || nx < 0 || ny >= m || nx >= n)
                continue;
            
            if(visited[ny][nx])
                continue;
            
            if(picture[ny][nx] != color)
                continue;
            
            visited[ny][nx] = true;
            q.emplace(make_pair(ny, nx));
            cnt++;
        }
    }
    
    return cnt;
}

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
vector<int> solution(int m, int n, vector<vector<int>> picture) {
    vector<int> answer(2);
    visited.assign(m, vector<bool>(n, false));
    
    int number_of_area = 0;
    int max_size_of_one_area = 0;
    
    for(int i = 0 ; i < m ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(!picture[i][j] || visited[i][j])
                continue;
            
            number_of_area++;
            visited[i][j] = true;
            int current_area_size = bfs(m, n, picture, i, j, picture[i][j]);
            max_size_of_one_area = max(max_size_of_one_area, current_area_size);
        }
    }
    
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
    return answer;
}
*/