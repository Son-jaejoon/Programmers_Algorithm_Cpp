/* 68644�� �� �� �̾Ƽ� ���ϱ�
// �ؼ� : �ߺ����� �ƴ��� üũ�ϱ�, set���� �ذ��Ϸ��ٰ� bool�� �����ؼ� ��.
// url : https://school.programmers.co.kr/learn/courses/30/lessons/68644

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    sort(numbers.begin(), numbers.end());
    
    vector<bool> visited(numbers[numbers.size() - 1] * 2 + 1, false);
    
    for(int i = 0 ; i < numbers.size() ; i++)
    {
        int curr_num = numbers[i];
        
        for(int j = i + 1 ; j < numbers.size() ; j++)
        {
            int next_num = numbers[j]; 
            
            if(visited[curr_num + next_num])
                continue;
            
            visited[curr_num + next_num] = true;
            answer.emplace_back(curr_num + next_num);
        }
    }
    
    sort(answer.begin(), answer.end());
    
    return answer;
}

*/