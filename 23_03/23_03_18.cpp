/* 12946번 하노이의 탑
// 해설 : 재귀, N-1을 최종목표로 옮기는 법
// url : https://school.programmers.co.kr/learn/courses/30/lessons/12946

#include <iostream>
#include <vector>

using namespace std;
vector<vector<int>> answer;

void hanoi(int from, int mid, int to, int n){
    
    if(!n)
        return;
    
    hanoi(from,to,mid,n-1);
    answer.push_back({from,to});
    hanoi(mid,from,to,n-1);
}

vector<vector<int>> solution(int n) {
    hanoi(1,2,3,n);
    
    return answer;
}
*/