/* 120808¹ø ºÐ¼öÀÇ µ¡¼À 
// ÇØ¼³ : ¼öÇÐ
// url : https://school.programmers.co.kr/learn/courses/30/lessons/120808

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    
    numer1 *= denom2;
    numer2 *= denom1;
    denom1 *= denom2;
    numer1 += numer2;
    
    for(int i = min(numer1, denom1) ; i > 1 ; i--)
    {
        if(numer1 % i == 0 && denom1 % i == 0)
        {
            numer1 /= i;
            denom1 /= i;
            
            break;
        }
    }
    
    answer.emplace_back(numer1);
    answer.emplace_back(denom1);
    return answer;
}
*/