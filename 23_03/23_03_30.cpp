/* 120876번 겹치는 선분의 길이
// 해설 : 구현
// url : https://school.programmers.co.kr/learn/courses/30/lessons/120876

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;

    sort(lines.begin(), lines.end());
    
    int prev_start = lines[0][0];
    int prev_end = lines[0][1];
    
    for(int i = 1 ; i < 3 ; i++)
    {
        int curr_start = lines[i][0];
        int curr_end = lines[i][1];
        
        if(curr_start < prev_start)
        {
            if(curr_end <= prev_end)
            {
                answer += curr_end - prev_start;
                prev_start = curr_end;
            }
            else
            {
                answer += prev_end - prev_start;
                prev_start = prev_end;
                prev_end = curr_end;
            }
        }
        else if(curr_start < prev_end)
        {
            if(curr_end <= prev_end)
            {
                answer += curr_end - curr_start;
                prev_start = curr_end;
            }
            else
            {
                answer += prev_end - curr_start;
                prev_start = prev_end;
                prev_end = curr_end;
            }
        }
        else
        {
            prev_start = curr_start;
            prev_end = curr_end;
        }
    }
    
    return answer;
}
*/