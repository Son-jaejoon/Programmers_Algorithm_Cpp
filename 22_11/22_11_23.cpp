/* 12987번 숫자 게임
// 해설 : 구현

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> A, vector<int> B) {
    int answer = 0;
        
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    
    int idx = 0;
    
    for(int i = 0 ; i < B.size() ; i++)
    {
        if(B[i] > A[idx])
        {
            idx++;
            answer++;
        }
    }
    
    return answer;
}
*/