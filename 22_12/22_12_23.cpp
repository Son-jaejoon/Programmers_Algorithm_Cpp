/* 12911번 다음 큰 숫자
// 해설 : 구현
// url : https://school.programmers.co.kr/learn/courses/30/lessons/12911

#include <string>
#include <vector>

using namespace std;

bool chk(int cnt, int answer)
{
    int answer_cnt = 0;
    
    while(answer != 1)
    {
        if(answer % 2 == 1)
            answer_cnt++;
        
        answer /= 2;
    }
    
    if(answer_cnt == cnt)
        return false;
    
    return true;
}

int solution(int n) {
    int answer = n + 1;
    int cnt = 0;
    int tmp = n;
    
    while(tmp != 1)
    {
        if(tmp % 2 == 1)
            cnt++;
        
        tmp /= 2;
    }
    
    while(chk(cnt, answer))
        answer++;
    
    return answer;
}
*/