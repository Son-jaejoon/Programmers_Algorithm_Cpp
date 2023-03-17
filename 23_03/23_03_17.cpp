/* 140107번 점 찍기
// 해설 : 구현
// url : https://school.programmers.co.kr/learn/courses/30/lessons/140107

#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(int k, int d) {
    long long answer = 0;
    
    long long dist = k;
    long long rad = d;
    
    for(long long i = 0 ; i <= rad ; i += dist)
    {
        int max_dist = sqrt(rad*rad - i*i);
        
        answer += (max_dist / dist) + 1;
        
    }
    
    return answer;
}
*/