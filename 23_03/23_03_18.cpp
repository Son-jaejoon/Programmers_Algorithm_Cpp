/* 12946�� �ϳ����� ž
// �ؼ� : ���, N-1�� ������ǥ�� �ű�� ��
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