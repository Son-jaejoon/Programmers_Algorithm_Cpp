/* 120923번 연속된 수의 합
// 해설 : 수학
// url : https://school.programmers.co.kr/learn/courses/30/lessons/120923

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    
    int mid = total/num;
    int side = num/2;
    answer.emplace_back(mid);
    
    if(num % 2 == 0)
    {
        answer.emplace_back(mid + side);
        
        side--;
        
        while(side > 0)
        {
            answer.emplace_back(mid - side);
            answer.emplace_back(mid + side);
            side--;
        }
    }
    else
    {
        while(side > 0)
        {
            answer.emplace_back(mid - side);
            answer.emplace_back(mid + side);
            side--;
        }
    }
    
    sort(answer.begin(), answer.end());
    return answer;
}
*/