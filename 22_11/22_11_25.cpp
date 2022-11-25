/* 77885�� 2�� ���Ϸ� �ٸ� ��Ʈ
// �ؼ� : ��Ʈ����

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