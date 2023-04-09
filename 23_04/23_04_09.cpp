/* 120875번 평행
// 해설 : 수학
// url : https://school.programmers.co.kr/learn/courses/30/lessons/120875

#include <string>
#include <vector>

using namespace std;

float calculate(vector<int> &dot1, vector<int> &dot2)
{
    float denom = dot1[0] - dot2[0];
    float numer = dot1[1] - dot2[1];
    
    return numer/denom;
}

int solution(vector<vector<int>> dots) {
    
    for(int i = 0 ; i < 4 ; i++)
    {
        float grad1 = calculate(dots[i], dots[(i + 1) % 4]);
        float grad2 = calculate(dots[(i + 2) % 4], dots[(i + 3) % 4]);
        
        if(grad1 == grad2)
            return 1;
    }
    
    return 0;
}
*/