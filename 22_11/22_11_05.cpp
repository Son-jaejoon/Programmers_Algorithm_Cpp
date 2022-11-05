#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/* 12981번 영어 끝말잇기
// 해설 : string, char, vector 응용
// url : https://school.programmers.co.kr/learn/courses/30/lessons/12981

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    vector<string> save;
    
    int fail_idx = 1;
    
    string prev_st = words[0];
    char prev_last_ch = prev_st.back();
    save.emplace_back(prev_st);
    
    for(int i = 1 ; i < words.size() ; i++)
    {
        fail_idx = i%n + 1;
        string curr_st = words[i];
        char curr_first_ch = curr_st.front();
        char curr_last_ch = curr_st.back();
        
        if(prev_last_ch != curr_first_ch || find(save.begin(), save.end(), curr_st) != save.end())
        {
            answer.emplace_back(fail_idx);
            answer.emplace_back(i/n + 1);
            return answer;
        }
        
        save.emplace_back(curr_st);
        prev_last_ch = curr_last_ch;
    }
    
    answer.emplace_back(0);
    answer.emplace_back(0);
    return answer;
}
*/