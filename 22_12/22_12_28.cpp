/* 12927번 야근 지수
// 해설 : 정렬, 구현
// url : https://school.programmers.co.kr/learn/courses/30/lessons/12927

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool cmp(int a, int b)
{
    return a > b;
}

long long solution(int n, vector<int> works) {
    long long answer = 0;
    
    int sum = 0;
    for(auto i : works)
    {
        sum += i;
    }
    
    if(sum <= n)
        return answer;
    
    sort(works.begin(), works.end(), cmp);
    
    int j = 0;
    
    while(n--)
    {
        for(int i = j ; i < works.size() ; i++)
        {
            if(works[i] == 0)
                continue;
            
            if(i == works.size() - 1)
            {
                works[i] -= 1;
                break;
            }
            else if(works[i] > works[i + 1])
            {
                works[i] -= 1;
                
                if(works[i] < works[i + 1])
                    j++;
                
                break;
            }
        }
    }
    
    for(auto i : works)
    {
        answer += i*i;
    }
    
    return answer;
}
*/