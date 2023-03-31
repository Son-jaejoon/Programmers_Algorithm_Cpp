/* 120924번 다음에 올 숫자
// 해설 : 수학
// url : https://school.programmers.co.kr/learn/courses/30/lessons/120924

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    
    int dist = common[1] - common[0];
    int multi = common[1] / common[0];
    
    if(common[1] + dist == common[2])
        answer = common.back() + dist;
    else
        answer = common.back() * multi;
    
    return answer;
}
*/