/* 68935번 3진법 뒤집기
// 해설 : 진법 계산
// url : https://school.programmers.co.kr/learn/courses/30/lessons/68935

#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

string to_three(int n)
{
    string result = "";
    
    while(true)
    {
        result += to_string(n%3);
        
        if(n < 3)
            break;
        
        n /= 3;
    }
    
    return result;
}

int calculate(string st)
{
    int result = 0;
    
    for(int i = 0 ; i < st.size() ; i++)
    {
        result += pow(3, st.size() - i - 1) * (st[i] - '0');
    }
    
    return result;
}

int solution(int n) {
    int answer = 0;
    
    string st = to_three(n);
    answer = calculate(st);
    
    return answer;
}
*/