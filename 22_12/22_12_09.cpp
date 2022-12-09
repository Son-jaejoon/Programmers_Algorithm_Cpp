/* 17678번 [1차] 셔틀버스
// 해설 : 구현
// url : https://school.programmers.co.kr/learn/courses/30/lessons/17678

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> time_to_int(vector<string> timetable)
{
    vector<int> time;
    
    for(int i = 0 ; i < timetable.size() ; i++)
    {
        int hour = stoi(timetable[i].substr(0, 2)) * 60;
        int min = stoi(timetable[i].substr(3,2));
        
        time.emplace_back(hour + min);
    }
    
    sort(time.begin(), time.end());
    
    return time;
}

string time_to_string(int time)
{
    string result = "";
    
    string hour = to_string(time/60);
    string min = to_string(time%60);
        
    if(stoi(min) < 10)
        min = "0" + min;
        
    if(stoi(hour) < 10)
        result = "0" + hour + ":" + min;
    else
        result = hour + ":" + min;
    
    return result;
}

pair<int, int> take_bus(int n, int t, int m, vector<int> time)
{
    int idx, population;
    idx = population = 0;
    
    for(int bus_idx = 0 ; bus_idx < n ; bus_idx++)
    {
        int bus_time = 9 * 60 + bus_idx * t;
        
        for(population = 0 ; population + idx < time.size() && population < m ; population++)
        {
            if(time[population + idx] > bus_time)
                break;
        }
        
        idx += population;
    }
    
    pair<int, int> result;
    result.first = population;
    result.second = idx;
    
    return result;
}

string solution(int n, int t, int m, vector<string> timetable) {
    string answer = "";
    
    vector<int> time = time_to_int(timetable);
    pair<int, int> result = take_bus(n, t, m, time);
    
    if(result.first < m)
        answer = time_to_string((n - 1)*t + 9 * 60);
    else
        answer = time_to_string(time[result.second - 1] - 1);
    
    return answer;
}
*/