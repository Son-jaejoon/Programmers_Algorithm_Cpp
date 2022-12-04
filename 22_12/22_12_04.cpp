/* 72411번 메뉴 리뉴얼
// 해설 : 문자열, 구현
// url : https://school.programmers.co.kr/learn/courses/30/lessons/72411

#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

unordered_map<string, int> combination[11];

int mxCount[11]; 

void comb(string str, int cnt, string result)
{
    if (cnt == str.size())
    {
        int num = result.size();
        combination[num][result]++;
        mxCount[num] = max(mxCount[num], combination[num][result]);
        return;
    }
    
    comb(str, cnt + 1, result + str[cnt]);
    comb(str, cnt + 1, result);
}

vector<string> solution(vector<string> orders, vector<int> course)
{
    vector<string> answer;

    for (auto order : orders)
    {
        sort(order.begin(), order.end());
        comb(order, 0, "");
    }

    for (auto num : course)
    {
        for (auto x : combination[num])
        {
            if (x.second == mxCount[num] && x.second >= 2)
            {
                answer.push_back(x.first);
            }
        }
    }

    sort(answer.begin(), answer.end());
    return answer;
}

*/