/* 42584�� �ֽİ���
// �ؼ� : ����, ������ �߸� �����ؼ� ��ư� Ǯ����..
// url : https://school.programmers.co.kr/learn/courses/30/lessons/42584

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    
    for(int i = 0 ; i < prices.size() ; i++)
    {
        int curr_value = prices[i];
        int time = 0;
        
        for(int j = i + 1 ; j < prices.size() ; j++)
        {
            int next_value = prices[j];
            time++;
            
            if(curr_value > next_value)
            {
                break;
            }
        }
        
        answer.emplace_back(time);
    }
    
    return answer;
}
*/