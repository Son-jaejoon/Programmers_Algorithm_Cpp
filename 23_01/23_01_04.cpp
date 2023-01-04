/* 131127번 할인 행사
// 해설 : 구현, 함수에서 변수 할당시 주소값을 복사하면 속도를 개선할 수 있다.
// url : https://school.programmers.co.kr/learn/courses/30/lessons/131127

#include <string>
#include <vector>
#include <map>

using namespace std;

bool chk(map<string, int> shopping, vector<string> &discount, int idx)
{
    for(int i = idx ; i < idx + 10 ; i++)
    {
        string buy_item = discount[i];
        if(!shopping[buy_item])
        {
            return false;
        }
        
        shopping[buy_item] -= 1;
    }
    
    return true;
}

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    
    map<string, int> mp;
    
    for(int i = 0 ; i < want.size() ; i++)
    {
        mp[want[i]] = number[i];
    }
    
    for(int i = 0 ; i <= discount.size() - 10 ; i++)
    {
        answer += chk(mp, discount, i);
    }
    
    return answer;
}
*/