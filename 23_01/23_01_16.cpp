/* 42746번 가장 큰 수
// 해설 : next_permutation으로 할 시 O(N) + 자료형 터짐 발생.
// 이를 방지하기 위해 정렬 조건을 주어, 바로 string으로 바꿈.
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