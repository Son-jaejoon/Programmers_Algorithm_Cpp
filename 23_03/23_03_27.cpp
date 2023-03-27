/* 150369번 택배 바달과 수거하기
// 해설 : 그리디 알고리즘, 구현
// url : https://school.programmers.co.kr/learn/courses/30/lessons/150369

#include <string>
#include <vector>

using namespace std;

long long solution(int cap, int n, vector<int> deliveries, vector<int> pickups) {
    long long answer = 0;
    
    int give = 0;
    int take = 0;
    
    for(int i = n - 1 ; i >= 0 ; i--)
    {
        int cnt = 0;
        
        while(give < deliveries[i] || take < pickups[i])
        {
            cnt++;
            give += cap;
            take += cap;
        }
        
        give -= deliveries[i];
        take -= pickups[i];
        answer += (i + 1)*cnt*2;
    }
    
    return answer;
}
*/