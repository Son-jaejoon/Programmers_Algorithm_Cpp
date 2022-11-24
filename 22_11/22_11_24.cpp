/* 12945번 피보나치 수
// 해설 : 재귀함수
// url : https://school.programmers.co.kr/learn/courses/30/lessons/12945

#include <string>
#include <vector>

using namespace std;

#define MOD 1234567

vector<int> fibo;

int cal(int n)
{
    if(fibo[n] != -1)
        return fibo[n];
    
    return fibo[n] = (cal(n - 2) + cal(n - 1))%MOD;
}

int solution(int n) {
    int answer = 0;
    
    fibo.assign(n + 1, -1);
    
    fibo[0] = 0;
    fibo[1] = 1;
    
    answer = cal(n);
    
    return answer;
}
*/