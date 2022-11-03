#include <string>
#include <vector>

using namespace std;

/* 12942�� ������ ��� ����
// �ؼ� : �ش� ������ ���� DFS�� ������ Ǯ�������� TLE������ ã�ƺ��� ���� ��� ���� �˰����� �־���.
// ���� : https://ggjjdiary.tistory.com/132
// url : https://school.programmers.co.kr/learn/courses/30/lessons/12942

long long dp[201][201];
long long d[201];

int solution(vector<vector<int>> matrix_sizes) {
    int answer = 0;
    int m_size = matrix_sizes.size();
    
    d[0] = matrix_sizes[0][0];
    
    for(int i = 0 ; i < m_size ; i++)
    {
        d[i + 1] = matrix_sizes[i][1];
    }
    
     for (int n = 0; n < m_size; n++)
     {
        for (int i = 1; i <= m_size - n; i++)
        {
            int j = i + n;
            
            if (i == j)
            {
                dp[i][j] = 0;
            }
            else
            {
                dp[i][j] = 2e10;
                for (int k = i; k <= j - 1; k++)
                {
                    dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + d[i - 1] * d[k] * d[j]);
                }
            }
        }
    }
    
    return answer = dp[1][m_size];
}
*/