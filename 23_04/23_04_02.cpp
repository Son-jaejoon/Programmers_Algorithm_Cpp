/* 120866번 안전지대
// 해설 : 구현
// url : https://school.programmers.co.kr/learn/courses/30/lessons/120866

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int dy[] = {-1, -1, -1, 1, 1, 1, 0, 0};
int dx[] = {-1, 0, 1, -1, 0, 1, -1, 1};

int solution(vector<vector<int>> board) {
    int answer = 0;
    
    for(int y = 0 ; y < board.size() ; y++)
    {
        for(int x = 0 ; x < board.size() ; x++)
        {
            if(board[y][x] != 1)
                continue;
            
            for(int dir = 0 ; dir < 9 ; dir++)
            {
                int ny = y + dy[dir];
                int nx = x + dx[dir];
                
                if(ny < 0 || nx < 0 || ny >= board.size() || nx >= board.size())
                    continue;
                
                if(board[ny][nx] == 1)
                    continue;
                
                board[ny][nx] = 2;
            }
        }
    }
    
    for(int i = 0 ; i < board.size() ; i++)
    {
        answer += count(board[i].begin(), board[i].end(), 0);
    }
    
    return answer;
}
*/