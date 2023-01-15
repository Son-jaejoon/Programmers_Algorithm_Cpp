/* 12899번 124나라의 숫자
// 해설 : 3진법, 0 -> 4
// url : https://school.programmers.co.kr/learn/courses/30/lessons/12899

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(int n) {
    string answer = "";
    
    while(n > 0)
    {
        int num = n%3;
        n /= 3;
        
        if(num == 0)
        {
            answer += '4';
            n -= 1;
        }
        else
            answer += to_string(num);
    }
    reverse(answer.begin(), answer.end());
    return answer;
}
*/