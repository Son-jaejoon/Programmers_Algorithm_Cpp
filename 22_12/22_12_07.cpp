/* 12971�� ��ƼĿ ������(2)
// �ؼ� : ���ڸ��� dp�� �ؼ������� �ʹ� ī�� ������ �ָ���
// url : https://school.programmers.co.kr/learn/courses/30/lessons/12971

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dp[100001][2];

void select(vector<int> sticker, int N)
{
    dp[0][0] = sticker[0]; // 1���� ����� ��
    dp[1][0] = sticker[0]; // 1���� �� 2���� �� ���� ��
    dp[1][1] = sticker[1]; // 1���� ���� ��
    
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
    
    // ���������� �ι�° ī�带 ���� �� or ���� ���� ��, ������ ī�带 ����� ��
    answer = max({dp[N - 2][0], dp[N - 2][1], dp[N - 1][1]});
    
    return answer;
}
*/