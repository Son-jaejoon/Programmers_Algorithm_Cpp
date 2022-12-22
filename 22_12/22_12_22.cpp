/* 82612번 부족한 금액 계산하기
// 해설 : 구현
// url : https://school.programmers.co.kr/learn/courses/30/lessons/82612

using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
        
    for(int i = 1 ; i <= count ; i++)
    {
        answer += price*i;
    }
    
    if(answer > money)
        answer -= money;
    else
        answer = 0;
    
    return answer;
}
*/