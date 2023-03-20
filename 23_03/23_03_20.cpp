/* 68646번 풍선 터트리기
// 해설 : 구현
// url : https://school.programmers.co.kr/learn/courses/30/lessons/68646

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int chk_left(vector<int> a, int min_idx)
{
    if(min_idx == 0)
        return 0;
    
    int cnt = 1;
    int left_idx = 1;
    int min_value = a[0];
    
    while(left_idx < min_idx)
    {
        if(min_value > a[left_idx])
        {
            min_value = a[left_idx];
            cnt++;
        }
        
        left_idx++;
    }
    
    return cnt;
}

int chk_right(vector<int> a, int min_idx)
{
    if(min_idx == a.size() - 1)
        return 0;
    
    int cnt = 1;
    int right_idx = a.size() - 2;
    int min_value = a.back();
    
    while(min_idx < right_idx)
    {
        if(min_value > a[right_idx])
        {
            min_value = a[right_idx];
            cnt++;
        }
        
        right_idx--;
    }
    
    return cnt;
}

int solution(vector<int> a) {
    int answer = 1;
    
    int min_value = *min_element(a.begin(), a.end());
    int min_idx = find(a.begin(), a.end(), min_value) - a.begin();
    
    answer += chk_left(a, min_idx) + chk_right(a, min_idx);
    
    return answer;
}
*/