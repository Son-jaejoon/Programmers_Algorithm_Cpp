/* 43238번 입국심사
// 해설 : 이분탐색
// url : https://school.programmers.co.kr/learn/courses/30/lessons/43238#

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(int n, vector<int> times) {
    long long answer = 0;
    
    int max_num = *max_element(times.begin(), times.end());
    
    long long lo = 1;
    long long hi = (long long)n*max_num;
    
    while(lo + 1 < hi)
    {
        long long mid = (lo + hi)/2;
        long long sum = 0;
        
        for(int i = 0 ; i < times.size() ; i++)
        {
            sum += (mid / times[i]);    
        }
        
        if(sum < n)
        {
            lo = mid;
        }
        else
        {
            hi = mid;
        }
    }
    
    answer = hi;
    
    return answer;
}
*/