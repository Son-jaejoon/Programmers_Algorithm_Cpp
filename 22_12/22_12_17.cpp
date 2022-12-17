/* 17681번 [1차] 비밀지도
// 해설 : 비트연산
// url : https://school.programmers.co.kr/learn/courses/30/lessons/17681

#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    
    for(int i = 0; i < n; i++)
    {
        arr1[i] = arr1[i]|arr2[i];
        
        string st = "";
        
        for(int j = 0 ; j < n ; j++)
        {
            if(arr1[i] % 2 == 0)
                st = " " + st;
            else
                st = "#" + st;
            
            arr1[i] /= 2;
        }
        
        answer.emplace_back(st);
    }
    
    return answer;
}
*/