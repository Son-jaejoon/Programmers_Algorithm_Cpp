/* 42898번 등굣길
// 해설 : dp
// url : https://school.programmers.co.kr/learn/courses/30/lessons/42898

#include <string>
#include <vector>

using namespace std;

bool chk[101][101];
int dp[101][101];

int mod = 1000000007;

int solution(int m, int n, vector<vector<int>> puddles) {
    int answer = 0;
    
    for(int i = 0 ; i < puddles.size() ; i++)
    {
        int x = puddles[i][0];
        int y = puddles[i][1];
        
        chk[y][x] = true;
    }
    
    dp[1][1] = 1;
    
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= m ; j++)
        {
            if(chk[i][j])
                continue;
            
            if(i - 1 >= 1)
                dp[i][j] += dp[i - 1][j];
            
            if(j - 1 >= 1)
                dp[i][j] += dp[i][j - 1];
            
            dp[i][j] %= mod;
        }
    }
    
    answer = dp[n][m];
    
    return answer;
}
*/