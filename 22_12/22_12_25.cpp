/* 42885번 구명보트
// 해설 : 이분탐색
// url : https://school.programmers.co.kr/learn/courses/30/lessons/42885

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    
    sort(people.begin(), people.end());
    
    int lo = 0;
    int hi = people.size() - 1;
    
    while(lo <= hi)
    {
        int sum = people[lo] + people[hi];
        
        if(lo == hi)
        {
            answer++;
            lo++;
            hi--;
        }
        else if(sum <= limit)
        {
            answer++;
            lo++;
            hi--;
        }
        else
        {
            answer++;
            hi--;
        }
    }
    
    return answer;
}
*/