/* 87389�� �������� 1�� �Ǵ� �� ã��
// �ؼ� : ���� ,�Ҽ�
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