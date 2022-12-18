/* 12982번 예산
// 해설 : 구현
// url : https://school.programmers.co.kr/learn/courses/30/lessons/12982

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    
    sort(d.begin(), d.end());
    
    for(int x : d)
    {
        if(x<=budget)
        {
            budget -= x;
            answer++;
        }
        else
            break;
    }
    
    return answer;
}
*/