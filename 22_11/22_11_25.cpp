/* 77885번 2개 이하로 다른 비트
// 해설 : 비트연산

#include <string>
#include <vector>

using namespace std;

vector<long long> solution(vector<long long> numbers)
{
    vector<long long> answer;
    
    for(int i = 0; i < numbers.size(); i++)
    {
        if(numbers[i] % 2 == 0)
            answer.push_back(numbers[i] + 1);
        else
        {
            long long bit = 1;
            
            while(1)
            {
                if((numbers[i] & bit) == 0) break;
                bit <<= 1;
            }
            
            bit >>= 1;
            answer.push_back(numbers[i] + bit);
        }
    }

    return answer;
}
*/