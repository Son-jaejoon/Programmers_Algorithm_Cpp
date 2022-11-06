#include <iostream>

using namespace std;

/* 12985번 예상 대진표
// 해설 : 수학

int solution(int n, int a, int b)
{
    int answer = 1;
    int a_idx = a/2 + a%2;
    int b_idx = b/2 + b%2;
    
    while(a_idx != b_idx)
    {
        a_idx = a_idx/2 + a_idx%2;
        b_idx = b_idx/2 + b_idx%2;
        
        answer++;
    }
    return answer;
}
*/