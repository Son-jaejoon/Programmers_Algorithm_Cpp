/* 1835번 단체사진 찍기
// 해설 : 조합
// url : https://school.programmers.co.kr/learn/courses/30/lessons/1835

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void setting(vector<char> &people)
{
    people.emplace_back('A');
    people.emplace_back('C');
    people.emplace_back('F');
    people.emplace_back('J');
    people.emplace_back('M');
    people.emplace_back('N');
    people.emplace_back('R');
    people.emplace_back('T');
    
    sort(people.begin(), people.end());
}

int solution(int n, vector<string> data) {
    int answer = 0;
    
    vector<char> people;
    setting(people);
    
    do
    {
        bool flag = false;
        
        for(int i = 0 ; i < data.size() ; i++)
        {
            int a = find(people.begin(), people.end(), data[i][0]) - people.begin();
            int b = find(people.begin(), people.end(), data[i][2]) - people.begin();
            int dist = (data[i][4] - '0') + 1;
            
            if(data[i][3] == '=')
            {
                flag = (abs(a - b) == dist) ? true : false;
            }
            else if(data[i][3] == '>')
            {
                flag = (abs(a - b) > dist) ? true : false;
            }
            else if(data[i][3] == '<')
            {
                flag = (abs(a - b) < dist) ? true : false;
            }
            
            if(!flag)
                break;
        }
        
        if(flag)
            answer++;
    }
    while(next_permutation(people.begin(), people.end()));
    
    return answer;
}
*/