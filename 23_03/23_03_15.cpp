/* 12905번 가장 큰 정사각형 찾기
// 해설 : DP
// url : https://school.programmers.co.kr/learn/courses/30/lessons/12905

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> board)
{
    int answer = 0;
        
    int dy[] = {-1, -1, 0};
    int dx[] = {-1, 0, -1};
    
    for(int i = 0 ; i < board.size() ; i++)
    {
        for(int j = 0 ; j < board[i].size() ; j++)
        {
            if(board[i][j] == 0)
                continue;
            
            int num = 987654321;
            
            for(int k = 0 ; k < 3 ; k++)
            {
                int ny = i + dy[k];
                int nx = j + dx[k];
                
                if(ny < 0 || nx < 0 || ny >= board.size() || nx >= board[i].size())
                {
                    num = 0;
                    break;
                }
                
                num = min(num, board[ny][nx]);
            }
            
            board[i][j] += num;
            
            answer = max(answer, board[i][j]);
        }
    }
    
    
    return answer*answer;
}
*/