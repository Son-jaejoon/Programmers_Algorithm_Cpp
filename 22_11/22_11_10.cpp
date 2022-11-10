/* 87390번 n^2 배열 자르기
// 해설 : 2차원 배열을 1차원으로 어떻게 표현하는 지 알고 있으면 쉽게 풀 수 있는 것 같다.
// url : https://school.programmers.co.kr/learn/courses/30/lessons/87390

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right)
{
    vector<int> answer;
    
    while(left <= right)
    {
        int idx = left - 1;
        int row = left / n;
        int col = left % n;
        
        if(col <= row)
        {
            answer.emplace_back(row + 1);
        }
        else
        {
            answer.emplace_back(col + 1);
        }
        
        left++;
    }
    
    return answer;
}
*/