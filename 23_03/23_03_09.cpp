/* 132265번 롤케이크 자르기
// 해설 : set, map을 이용한 구현
// url : https://school.programmers.co.kr/learn/courses/30/lessons/132265

#include <string>
#include <vector>
#include <set>
#include <map>
using namespace std;

int solution(vector<int> topping) {
    int answer = 0;
    
    map<int, int> older_bro;
    
    for(auto i : topping)
    {
        if(older_bro.find(i) != older_bro.end())
            older_bro[i]++;
        else
            older_bro.insert(make_pair(i, 1));
    }
    
    set<int> bro;
    
    for(auto i : topping)
    {
        bro.insert(i);
        
        if(--older_bro[i] == 0)
            older_bro.erase(i);
    
        if(bro.size() == older_bro.size())
            answer++;
    }
    
    return answer;
}
*/