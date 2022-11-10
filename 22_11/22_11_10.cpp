/* 87390�� n^2 �迭 �ڸ���
// �ؼ� : 2���� �迭�� 1�������� ��� ǥ���ϴ� �� �˰� ������ ���� Ǯ �� �ִ� �� ����.
// url : https://school.programmers.co.kr/learn/courses/30/lessons/87390

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right)
{
    vector<int> answer;
    
    while(left <= right)
    {
        int idx = left - 1;
        int row = left / n;
        int col = left % n;
        
        if(col <= row)
        {
            answer.emplace_back(row + 1);
        }
        else
        {
            answer.emplace_back(col + 1);
        }
        
        left++;
    }
    
    return answer;
}
*/