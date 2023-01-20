/* 12938번 최고의 집합
// 해설 : 수학
// url : https://school.programmers.co.kr/learn/courses/30/lessons/12938

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int s) {
    vector<int> answer;
    
    if(n > s)
    {
        answer.emplace_back(-1);
        return answer;
    }
        
    int standard = s / n;
    int remain = s % n;
    
    int cnt = 1;
    
    for(int i = 1 ; i <= n ; i++)
    {
        if(i > n - remain)
            answer.emplace_back(standard + 1);
        else
            answer.emplace_back(standard);
    }
    
    return answer;
}
*/