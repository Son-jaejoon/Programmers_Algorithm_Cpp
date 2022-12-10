/* 42890번 후보키
// 해설 : 문자열, 데이터베이스 만들기
// url : https://school.programmers.co.kr/learn/courses/30/lessons/42890

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int col, row;
vector<vector<string>> r;
vector<int> v;
vector<vector<int>> key;

void go(int index, int cnt)
{

    if (cnt == 0)
    {

        if (!key.empty())
        {
            for (int i = 0; i < key.size(); i++)
            {

                bool isMinimal = false;

                for (int j = 0; j < key[i].size(); j++)
                {
                    bool alreadyIn = false;

                    for (int k = 0; k < v.size(); k++)
                    {
                        if (key[i][j] == v[k])
                            alreadyIn = true;
                    }

                    if (!alreadyIn)
                        isMinimal = true;
                }

                if (!isMinimal)
                    return;
            }
        }

        vector<string> cmp;
        bool isUnique = true;

        for (int i = 0; i < row; i++)
        {
            string s = "";
            
            for (int j = 0; j < v.size(); j++)
                s += r[i][v[j]];
            
            cmp.push_back(s);
        }

        sort(cmp.begin(), cmp.end());

        for (int i = 0; i < row - 1; i++)
        {
            if (cmp[i] == cmp[i + 1])
                isUnique = false;
        }

        if (isUnique)
            key.push_back(v);

        return;
    }

    for (int i = index; i < col; i++)
    {
        v.push_back(i);
        go(i + 1, cnt - 1);
        v.pop_back();
    }

    return;
}

int solution(vector<vector<string>> relation)
{
    int answer = 0;

    r = relation;
    col = relation[0].size();
    row = relation.size();

    for (int i = 1; i <= col; i++)
        go(0, i);

    answer = key.size();

    return answer;
}
*/