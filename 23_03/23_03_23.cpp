/* 92342번 양궁대회
// 해설 : dfs
// url : https://school.programmers.co.kr/learn/courses/30/lessons/92342

#include <string>
#include <vector>

using namespace std;

int max_diff;
vector<int> answer;

bool cmp(vector<int> ryan)
{
    for(int i = 10 ; i >= 0 ; i--)
    {
        if(ryan[i] > answer[i])
            return true;
        else if(ryan[i] < answer[i])
            return false;
    }
}

void calc(vector<int> ryan, vector<int> info)
{
    int ryan_score = 0;
    int apeach_score = 0;
    
    for(int i = 0 ; i < 11 ; i++)
    {
        if(ryan[i] > info[i])
            ryan_score += 10 - i;
        else if(info[i] > 0)
            apeach_score += 10 - i;
    }
    
    int diff = ryan_score - apeach_score;
    
    if(diff > 0 && max_diff <= diff)
    {
        if(max_diff == diff && !cmp(ryan))
            return;
        
        answer = ryan;
        max_diff = diff;
    }
}

void dfs(int idx, int arrow, vector<int> ryan, vector<int> info)
{
    if(idx == 11 || arrow == 0)
    {
        ryan[10] += arrow;
        calc(ryan, info);
        return;
    }
    
    dfs(idx + 1, arrow, ryan, info);
    
    if(info[idx] < arrow)
    {
        ryan[idx] = info[idx] + 1;
        dfs(idx + 1, arrow - info[idx] - 1, ryan, info);
    }
}

vector<int> solution(int n, vector<int> info) {
    vector<int> ryan(11, 0);
    
    dfs(0, n, ryan, info);
    
    if(answer.empty())
        answer.emplace_back(-1);
    
    return answer;
}
*/