/* 87389번 나머지가 1이 되는 수 찾기
// 해설 : 구현 ,소수
// url : https://school.programmers.co.kr/learn/courses/30/lessons/87389

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = n - 1;
    
    n -= 1;
    
    for(int i = 2 ; i*i <= n ; i++)
    {
        if(n % i == 0)
        {
            answer = i;
            break;   
        }
    }
    
    return answer;
}
*/