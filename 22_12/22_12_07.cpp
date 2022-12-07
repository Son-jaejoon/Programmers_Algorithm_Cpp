/* 12971번 스티커 모으기(2)
// 해설 : 보자마자 dp로 해석했지만 초반 카드 설정에 애먹음
// url : https://school.programmers.co.kr/learn/courses/30/lessons/12971

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dp[100001][2];

void select(vector<int> sticker, int N)
{
    dp[0][0] = sticker[0]; // 1번을 뜯었을 때
    dp[1][0] = sticker[0]; // 1번을 뜯어서 2번을 못 뜯을 때
    dp[1][1] = sticker[1]; // 1번을 뜯을 때
    
    for(int i = 2 ; i < N ; i++)
    {
        dp[i][0] = max(dp[i - 2][0] + sticker[i], dp[i - 1][0]);
        dp[i][1] = max(dp[i - 2][1] + sticker[i], dp[i - 1][1]);
    }
}

int solution(vector<int> sticker)
{
    int answer = 0;
    
    int N = sticker.size();
    
    if(N == 1)
        return sticker[0];
    
    if(N == 2)
        return max(sticker[0], sticker[1]);
    
    select(sticker, N);
    
    // 마지막에서 두번째 카드를 뜯을 때 or 뜯지 않을 때, 마지막 카드를 뜯었을 때
    answer = max({dp[N - 2][0], dp[N - 2][1], dp[N - 1][1]});
    
    return answer;
}
*/