/* 12973�� ¦���� �����ϱ�
// �ؼ� : �ܼ��ϰ� ������ �� �Ŷ� �����ߴµ� �����ʾ� �� �����غ���, vector�� ������ �ְ� �ٸ��� ����
// url : https://school.programmers.co.kr/learn/courses/30/lessons/12973

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string s)
{
    int answer = -1;

    if(s.size() % 2 == 1)
        return answer = 0;
    
    vector<char> v;
    
    
    for(char c : s)
    {
        if(v.size() == 0)
            v.emplace_back(c);
        else
        {
            if(v.back() == c)
                v.pop_back();
            else
                v.emplace_back(c);
        }
    }
    
    if(v.size() == 0)
        return 1;
    else
        return 0;
    
    return answer;
}
*/

/* 12939�� �ִ񰪰� �ּڰ�
// �ؼ� : max, min
// url : https://school.programmers.co.kr/learn/courses/30/lessons/12939

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> save;
    
    string num = "";
    
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(s[i] == ' ')
        {
            save.emplace_back(stoi(num));
            num = "";
        }
        else
        {
            num.push_back(s[i]);
        }
    }
    
    save.emplace_back(stoi(num));
    
    int max_num = -987654321, min_num = 987654321;
    for(int i = 0 ; i < save.size() ; i++)
    {
        if(save[i] > max_num)
            max_num = save[i];
        
        if(save[i] < min_num)
            min_num = save[i];
    }
    
    answer += to_string(min_num) + ' ' + to_string(max_num);
    return answer;
}
*/