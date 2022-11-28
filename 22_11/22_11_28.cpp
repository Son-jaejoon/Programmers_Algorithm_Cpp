/* 62048번 멀쩡한 사각형
// 해설 : 수학, 일차함수 응용
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