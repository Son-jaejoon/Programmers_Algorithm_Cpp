/* 43165번 타겟 넘버
// 해설 : dfs
// url : https://school.programmers.co.kr/learn/courses/30/lessons/43165

#include <string>
#include <vector>

using namespace std;

int answer;

void dfs(vector<int> &numbers, const int target, int sum, int idx)
{
    if(idx == numbers.size())
    {
        if(target == sum)
            answer++;
        
        return;
    }
    
    dfs(numbers, target, sum - numbers[idx], idx + 1);
    dfs(numbers, target, sum + numbers[idx], idx + 1);
}

int solution(vector<int> numbers, int target) {
    dfs(numbers, target, -numbers[0], 1);
    dfs(numbers, target, numbers[0], 1);
    
    return answer;
}

*/