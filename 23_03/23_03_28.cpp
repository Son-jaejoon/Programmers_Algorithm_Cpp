/* 150370번 개인정보 수집 유효기간
// 해설 : 구현
// url : https://school.programmers.co.kr/learn/courses/30/lessons/150370

#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    map<char, int> mp;
    
    for(int i = 0 ; i < terms.size() ; i++)
    {
        char type = terms[i][0];
        int date = stoi(terms[i].substr(2));
        mp.insert(make_pair(type, date));     
        cout << type << " " << date << endl;
    }
    
    for(int i = 0 ; i < privacies.size() ; i++)
    {
        string curr_privacy = privacies[i];
        int year = stoi(curr_privacy.substr(0, 4));
        int month = stoi(curr_privacy.substr(5, 2));
        int day = stoi(curr_privacy.substr(8, 2));
        
        char type = curr_privacy.back();
        int date = mp[type];
        
        month += date;
        
        while(month > 12)
        {
            month -= 12;
            year++;
        }
        
        if(year > stoi(today.substr(0, 4)))
            continue;
        
        if(year == stoi(today.substr(0, 4)))
        {
            if(month > stoi(today.substr(5, 2)))
                continue;
            
            if(month == stoi(today.substr(5, 2)))
            {
                if(day > stoi(today.substr(8, 2)))
                    continue;
            }
        }
        
        answer.emplace_back(i + 1);
    }
    
    return answer;
}
*/