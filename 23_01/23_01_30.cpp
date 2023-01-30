/* 42577번 전화번호 목록
// 해설 : string
// url : https://school.programmers.co.kr/learn/courses/30/lessons/42577

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    
    sort(phone_book.begin(), phone_book.end());
    
    for(int i = 0 ; i < phone_book.size() - 1; i++)
    {
        bool chk = true;
        
        string curr_st = phone_book[i];
        
        for(int j = 0 ; j < curr_st.size() ; j++)
        {
            if(phone_book[i + 1][j] != curr_st[j])
            {
                chk = false;
                break;
            }    
        }
        
        if(chk)
            return false;
    }
    
    return answer;
}
*/