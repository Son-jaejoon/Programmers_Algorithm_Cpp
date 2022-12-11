/* 77484번 로또의 최고 순위와 최저 순위
// 해설 : 구현
// url : https://school.programmers.co.kr/learn/courses/30/lessons/77484

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    
    int win_count = 0;
    int zero = count(lottos.begin(), lottos.end(), 0);
    
    for(int i = 0 ; i < win_nums.size() ; i++)
    {
        if(find(lottos.begin(), lottos.end(), win_nums[i]) != lottos.end())
            win_count++;
    }
    
    if(win_count + zero > 1)
        answer.emplace_back(7 - (win_count + zero));
    else
        answer.emplace_back(6);
    
    if(win_count > 1)
        answer.emplace_back(7 - win_count);
    else
        answer.emplace_back(6);
    
    return answer;
}
*/