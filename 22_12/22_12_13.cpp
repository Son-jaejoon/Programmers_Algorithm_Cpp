/* 17682번 [1차] 다트 게임
// 해설 : 구현
// url : https://school.programmers.co.kr/learn/courses/30/lessons/17682

#include <string>
#include <algorithm>
using namespace std;

int solution(string dartResult) {
    int answer = 0;
    
    vector<int> point;
    
    for(int i = 0 ; i < dartResult.size() ; i++){
        if(dartResult[i] == '*'){
            if(point.size() == 1)
                point[point.size() - 1] = point.back() * 2;
            else{
                point[point.size() - 2] = point[point.size() - 2] * 2;
                point[point.size() - 1] = point.back() * 2;
            }
        }
        else if(dartResult[i] == '#'){
            point[point.size() - 1] = -point.back();
        }
        else if(dartResult[i] == 'S'){
            continue;
        }
        else if(dartResult[i] == 'D'){
            point[point.size() - 1] = point.back() * point.back();
        }
        else if(dartResult[i] == 'T'){
            point[point.size() - 1] = point.back() * point.back() * point.back();
        }
        else{
            if(i < dartResult.size() - 1 && dartResult[i + 1] == '0')
            {
                point.emplace_back(10);
                i++;
            }
            else
                point.emplace_back(dartResult[i] - '0');
        }
    }
    
    for(auto i : point){
        answer += i;
    }
    
    return answer;
}
*/