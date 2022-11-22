/* 12941번 최솟값 만들기
// 해설 : sort 역순 정렬시 rbegin, rend을 사용하면 역순으로 정렬이 된다.
// url : https://school.programmers.co.kr/learn/courses/30/lessons/12941

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
    
    sort(A.begin(), A.end());
    sort(B.rbegin(), B.rend());
    
    for(int i = 0 ; i < A.size() ; i++)
    {
        answer += A[i]*B[i];
    }
    
    return answer;
}
*/