/* 92344�� �ı����� ���� �ǹ�
// �ؼ� : 2���� ���� ������, O(N)���� �ѹ��� ����ϱ� 
// url : https://school.programmers.co.kr/learn/courses/30/lessons/92344

#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<vector<int>> skill) {
    int answer = 0;
    int N = board.size();
    int M = board[0].size();
    
    vector<vector<int>> map(N + 1, vector<int>(M + 1, 0));
    
    for(int i = 0 ; i < skill.size() ; i++)
    {
        int type = skill[i][0];
        int r1 = skill[i][1];
        int c1 = skill[i][2];
        int r2 = skill[i][3];
        int c2 = skill[i][4];
        int degree = skill[i][5];
        
        if(type == 1)
            degree *= -1;
        
        map[r1][c1] += degree;
        map[r1][c2 + 1] -= degree;
        map[r2 + 1][c1] -= degree;
        map[r2 + 1][c2 + 1] += degree;
    }
    
    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 1 ; j < M ; j++)
        {
            map[i][j] += map[i][j - 1];
        }
    }
    
    for(int i = 1 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            map[i][j] += map[i - 1][j];
        }
    }
    
    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            map[i][j] += board[i][j];
            
            if(map[i][j] > 0)
                answer++;
        }
    }
    
    return answer;
}
*/