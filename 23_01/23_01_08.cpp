/* 42578번 위장
// 해설 : map
// url : https://school.programmers.co.kr/learn/courses/30/lessons/42578

#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    
    map<string, int> mp;
    
    for(auto a : clothes)
    {
        mp[a[1]]++;
    }
    
    for(auto a : mp)
    {
        answer *= (a.second + 1);
    }
    
    answer -= 1;
    
    return answer;
}
*/