/* 12900번 2 x n타일링
// 해설 : 피보나치
// url : https://school.programmers.co.kr/learn/courses/30/lessons/12900

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    vector<int> v(n + 1);
    v[1] = 1;
    v[2] = 2;
    
    for(int i = 3 ; i <= n ; i++)
    {
        v[i] = (v[i - 1] + v[i - 2]) % 1000000007;
    }
    
    answer = v[n];
    return answer;
}
*/