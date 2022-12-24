/* 12924번 숫자의 표현
// 해설 : 구현, 조합
// url : https://school.programmers.co.kr/learn/courses/30/lessons/12924

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    
    int num = (n + 1) / 2;
    int answer = 1;
    int sum = 0;
    int cnt = 1;
    
    for(int i = 1 ; i <= (n + 1)/2 ; i++)
    {
        sum += i;
        
        if(sum >= n)
        {
            while(sum > n)
                sum -= cnt++;
            
            if(sum == n)
                answer++;
        }
    }
    
    if(n == 1)
        return 1;
    
    return answer;
}
*/