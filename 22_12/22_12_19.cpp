/* 118666번 성격 유형 검사하기
// 해설 : 구현
// url : https://school.programmers.co.kr/learn/courses/30/lessons/118666

#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    map<char, int> tmp;
    
    for(auto i = 0; i < survey.size(); ++i)
    {
        auto& survey_item = survey[i];
        auto& choice = choices[i];
        if (choice == 4)		continue;
        tmp[survey_item.at(choice < 4 ? 0 : 1)] += abs(choice - 4);
    }
    
    string answer = "";
    
    if (tmp['R'] >= tmp['T'])
        answer += 'R';
    else
        answer += 'T';
    
    if (tmp['C'] >= tmp['F'])
        answer += 'C';
    else
        answer += 'F';
    
    if (tmp['J'] >= tmp['M'])
        answer += 'J';
    else
        answer += 'M';
    
    if (tmp['A'] >= tmp['N'])
        answer += 'A';
    else
        answer += 'N';
    return answer;
}
*/