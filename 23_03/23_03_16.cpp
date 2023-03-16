/* 12904번 가장 긴 팰린드롬
// 해설 : 구현
// url : https://school.programmers.co.kr/learn/courses/30/lessons/12904

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string s)
{
    s += "0";
    int answer = 1;   
    
    for(int i = 0 ; i < s.size() ; i++)
    {
        int num = 1;
        int cnt_1 = 1;
        int cnt_2 = 0;
        bool chk_1 = false;
        bool chk_2 = false;
        
        while(i - num >= 0 && i + num < s.size())
        {
            if(!chk_1 && s[i - num] == s[i + num])
                cnt_1 += 2;
            else
                chk_1 = true;
            
            if(!chk_2 && s[i - num] == s[i + num - 1])
                cnt_2 += 2;
            else
                chk_2 = true;
            
            if(chk_1 && chk_2)
                break;
            
            num++;
        }
        
        answer = max({answer, cnt_1, cnt_2});
    }
    
    return answer;
}
*/