/* 43105번 정수 삼각형
// 해설 : 완전탐색, DP
// url : https://school.programmers.co.kr/learn/courses/30/lessons/43105

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> triangle) 
{
    int answer = 0;
    
    for(int i = 1 ; i < triangle.size() ; i++)
    {
        for(int j = 0 ; j < triangle[i].size() ; j++)
        {
            if(j == 0)
            {
                triangle[i][j] += triangle[i - 1][j];
            }
            else if(j == triangle[i].size() - 1)
            {
                triangle[i][j] += triangle[i - 1][j - 1];
            }
            else
            {
                triangle[i][j] += max(triangle[i - 1][j], triangle[i - 1][j - 1]);
            }
            
            if(i == triangle.size() - 1)
            {
                answer = max(answer, triangle[i][j]);
            }
        }
    }
    
    return answer;
}
*/