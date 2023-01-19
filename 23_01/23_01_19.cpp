/* 42842번 카펫
// 해설 : 수학
// url : https://school.programmers.co.kr/learn/courses/30/lessons/42842

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    for(int i = 1 ; i <= yellow ; i++)
    {
        if(yellow % i != 0)
            continue;
        
        int num = yellow/i;
        
        int cnt = i*2 + num*2 + 4;
        
        if(cnt == brown)
        {
            answer.emplace_back(max(i, num) + 2);
            answer.emplace_back(min(i, num) + 2);
            break;
        }
    }
    
    return answer;
}
*/