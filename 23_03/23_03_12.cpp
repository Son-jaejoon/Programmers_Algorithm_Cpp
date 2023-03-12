/* 42627번 디스크 컨트롤러
// 해설 : 우선순위 큐
// url : https://school.programmers.co.kr/learn/courses/30/lessons/42627

#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> jobs) {
    int answer = 0;
    sort(jobs.begin(), jobs.end());
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    int idx = 0, time = 0;
    
    while(idx < jobs.size() || !pq.empty())
    {
        if(idx < jobs.size() && time >= jobs[idx][0])
        {
            pq.emplace(make_pair(jobs[idx][1], jobs[idx][0]));
            idx++;
            continue;
        }
        
        if(!pq.empty())
        {
            time += pq.top().first;
            answer += time - pq.top().second;
            pq.pop();
        }
        else
        {
            time = jobs[idx][0];
        }
    }
    
    return answer / jobs.size();
}
*/