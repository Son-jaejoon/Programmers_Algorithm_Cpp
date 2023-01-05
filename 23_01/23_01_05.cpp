/* 42586번 기능개발
// 해설 : 구현
// url : https://school.programmers.co.kr/learn/courses/30/lessons/42586

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
    vector<int> distribute;
    
    for(int i = 0 ; i < progresses.size() ; i++)
    {
        int curr_percent = progresses[i];
        int speed = speeds[i];
        int daytime = 0;
        
        while(curr_percent < 100)
        {
            curr_percent += speed;
            daytime++;
        }
        
        distribute.emplace_back(daytime);
    }
    
    int curr_day = distribute[0];
    int cnt = 1;
    
    for(int i = 1 ; i < distribute.size() ; i++)
    {
        int next_day = distribute[i];
        
        if(curr_day >= next_day)
            cnt++;
        else
        {
            curr_day = next_day;
            answer.emplace_back(cnt);
            cnt = 1;
        }
    }
    
    answer.emplace_back(cnt);
    return answer;
}
*/