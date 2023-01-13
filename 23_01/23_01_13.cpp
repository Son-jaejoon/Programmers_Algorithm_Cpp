/* 12936�� �� ���� ���
// �ؼ� : ����
// ó���� Next_permutation���� �����ߴµ� ȿ�������� ������, ��Ģ�� ã�Ƽ� �ذ���.
// url : https://school.programmers.co.kr/learn/courses/30/lessons/12936

#include <string>
#include <vector>

using namespace std;

long long factorial(int n)
{
    if(n == 1)
        return 1;

    return n*factorial(n - 1);
}

void find_k(vector<int> &answer, vector<int> &num, long long facto_n, int n, long long k)
{
    if(num.size() == 1)
    {
        answer.emplace_back(num[0]);
        return;
    }

    long long div = k/facto_n;
    long long mod = k%facto_n;

    facto_n /= n;
    answer.emplace_back(num[div]);
    num.erase(num.begin() + div);

    find_k(answer, num, facto_n, n - 1, mod);
}

vector<int> solution(int n, long long k) {
    vector<int> answer;
    vector<int> num;

    for(int i = 1 ; i <= n ; i++)
    {
        num.emplace_back(i);
    }

    find_k(answer, num, factorial(n - 1), n - 1, k - 1);

    return answer;
}
*/