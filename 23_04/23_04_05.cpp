/* 120812번 최빈값 구하기
// 해설 : 구현
// url : https://school.programmers.co.kr/learn/courses/30/lessons/120812

#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int max_cnt = 0;
    
    map<int, int> mp;
    
    for(int num : array)
    {
        if(mp.find(num) == mp.end())
            mp.insert(make_pair(num, 1));
        else
            mp[num]++;
        
        if(mp[num] > max_cnt)
        {
            answer = num;
            max_cnt = mp[num];
        }
        else if(mp[num] == max_cnt)
        {
            answer = -1;
        }
    }
    
    return answer;
}
*/