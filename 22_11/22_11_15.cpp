/* 92341번 주차 요금 계산
// 해설 : 오름차순 정렬 + key 저장 -> map, sstream을 이용해서 string 자르기
// url : https://school.programmers.co.kr/learn/courses/30/lessons/92341

#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <cmath>

using namespace std;

int cal_fee(string in, string out)
{
    int h_in = stoi(in.substr(0, 2));
    int m_in = stoi(in.substr(3, 2));
    int h_out = stoi(out.substr(0, 2));
    int m_out = stoi(out.substr(3, 2));
    
    int time = (h_out - h_in)*60 + (m_out - m_in);
    
    return time;
}

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    map<string, vector<string>> m;
    
    string time, number, chk;
    
    for(int i = 0 ; i < records.size() ; i++)
    {
        string s = records[i];
        stringstream ss(s);
        
        ss >> time >> number >> chk;
        
        m[number].emplace_back(time);
        ss.clear();
    }
    
    for(auto it: m)
    {
        if(it.second.size() % 2)
            it.second.emplace_back("23:59");
        
        vector<string> save = it.second;
        int sum = 0;
        
        for(int i = 0 ; i < save.size() - 1 ; i += 2)
        {
            sum += cal_fee(save[i], save[i + 1]);
        }
        
        int price = fees[1];
        
        if(sum > fees[0])
        {
            price += ceil((sum - fees[0]) / (double)fees[2]) * fees[3];
        }
        
        answer.emplace_back(price);
    }
    
    return answer;
}
*/