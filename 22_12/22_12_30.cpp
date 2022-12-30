/* 138476번 귤 고르기
// 해설 : 정렬
// url : https://school.programmers.co.kr/learn/courses/30/lessons/138476

#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    
    map<int, int> m;
    
    for(int i = 0 ; i < tangerine.size() ; i++)
    {
        int num = tangerine[i];
        
        if(m.find(num) == m.end())
            m.insert(make_pair(num, 1));
        else
            m[num] += 1;
    }
    
    vector<pair<int, int>> v(m.begin(), m.end());
    
    sort(v.begin(), v.end(), cmp);
    
    int sum = 0;
    
    for(int i = 0 ; i < v.size() ; i++)
    {
        int cnt = v[i].second;
        answer++;
        
        sum += cnt;
        
        if(sum >= k)
            break;
    }
    
    return answer;
}
*/