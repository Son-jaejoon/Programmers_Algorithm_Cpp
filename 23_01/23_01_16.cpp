/* 42746�� ���� ū ��
// �ؼ� : next_permutation���� �� �� O(N) + �ڷ��� ���� �߻�.
// �̸� �����ϱ� ���� ���� ������ �־�, �ٷ� string���� �ٲ�.
// url : https://school.programmers.co.kr/learn/courses/30/lessons/42746

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(string &a, string &b)
{
    return a + b > b + a;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> v;
    
    for(auto i : numbers)
    {
        v.emplace_back(to_string(i));
    }
    
    sort(v.begin(), v.end(), cmp);
    
    if(v[0] == "0")
        return answer = "0";
    
    for(auto i : v)
        answer += i;
    
    return answer;
}
*/