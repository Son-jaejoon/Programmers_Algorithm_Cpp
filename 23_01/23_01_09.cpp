/* 12914번 멀리뛰기
// 해설 : DP
// url : https://school.programmers.co.kr/learn/courses/30/lessons/12914

#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long long answer = 0;
    
    vector<int> dp;
    dp.assign(n + 1, 0);
    dp[1] = 1;
    dp[2] = 2;
    
    for(int i = 3 ; i <= n ; i++)
    {
        dp[i] = (dp[i - 1] + dp[i - 2])  % 1234567;
    }
    
    answer = dp[n];
    return answer;
}
*/