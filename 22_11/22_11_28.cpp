/* 62048�� ������ �簢��
// �ؼ� : ����, �����Լ� ����
// url : https://school.programmers.co.kr/learn/courses/30/lessons/62048

using namespace std;

long long solution(int w,int h) {
    long long answer = 0;
    
    for(int i = 1 ; i < w ; i++)
    {
        long long box = (double)h*i / w;
        
        answer += box;
    }
    
    answer *= 2;
    
    return answer;
}
*/