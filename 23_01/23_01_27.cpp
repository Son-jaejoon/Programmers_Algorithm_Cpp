/* 42626번 더 맵게
// 해설 : 우선순위 큐
// url : https://school.programmers.co.kr/learn/courses/30/lessons/42626

#include <string>
#include <vector>
#include <queue>
#include <functional>
#include <algorithm>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    int num = 0;
    
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for(auto i : scoville)
        pq.emplace(i);
    
    while(pq.top() < K)
    {
        if(pq.size() == 1)
            return -1;
        
        num = pq.top();
        pq.pop();
        
        num += pq.top()*2;
        pq.pop();
        
        pq.emplace(num);
        answer++;
    }
    
    return answer;
}
*/