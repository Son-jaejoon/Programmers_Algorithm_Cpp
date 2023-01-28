/* 131701번 연속 부분 수열 합의 개수
// 해설 : 연속 부분 수열의 합
// url : https://school.programmers.co.kr/learn/courses/30/lessons/131701

#include <string>
#include <vector>
#include <set>
using namespace std;

set<int> s;

void chk(vector<int> &v, int idx) 
{
    int sum = v[idx];
    
    s.insert(sum);

    int i = idx + 1;
    
    if (i >= v.size())
        i = 0;

    while (i!=idx)
    {
        sum += v[i];
        s.insert(sum);
        
        i++;
        
        if (i >= v.size())
            i = 0;
    }
}

int solution(vector<int> elements) {
    int answer = 0;
    
    for (int i = 0; i <elements.size(); i++) 
    {
        chk(elements, i);
    }
    
    answer = s.size();
    return answer;
}
*/