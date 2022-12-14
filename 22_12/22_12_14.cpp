/* 42889번 실패율
// 해설 : 정렬
// url : https://school.programmers.co.kr/learn/courses/30/lessons/42889

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, double> a, pair<int, double> b)
{
    if(a.second == b.second)
        return a.first < b.first;
    else
        return b.second < a.second;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    
    sort(stages.begin(), stages.end());
    
    vector<pair<int, double>> failure_rate;
    
    int curr_stage = 0;
    
    for(int i = 0 ; i < stages.size() ; i++)
    {
        if(curr_stage != stages[i])
        {
            for(int j = curr_stage + 1 ; j < stages[i] ; j++)
            {
                    failure_rate.emplace_back(make_pair(j, 0.0));
            }
            
            curr_stage = stages[i];    
        }
        else
            continue;
        
        double fail = 1;
        double total = 1;
        
        if(curr_stage == N + 1)
            continue;
        
        for(int j = i + 1 ; j < stages.size() ; j++)
        {
            if(stages[j] == curr_stage)
                fail += 1.0;
            
            total += 1.0;
        }
        
        failure_rate.emplace_back(make_pair(curr_stage, fail/total));
    }
    
    if(failure_rate.size() < N)
    {
        for(int i = failure_rate.back().first + 1; i <= N ; i++)
        {
            failure_rate.emplace_back(make_pair(i, 0.0));
        }
    }
    
    sort(failure_rate.begin(), failure_rate.end(), cmp);
    
    for(int i = 0 ; i < failure_rate.size() ; i++)
    {
        answer.emplace_back(failure_rate[i].first);
    }
    
    return answer;
}
*/