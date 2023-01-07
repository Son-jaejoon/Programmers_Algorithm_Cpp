/* 42884번 단속카메라
// 해설 : 정렬, 구현
// url : https://school.programmers.co.kr/learn/courses/30/lessons/42884

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(vector<int> &a, vector<int> &b)
{
    return a[1] < b[1];
}

int solution(vector<vector<int>> routes) {
    int answer = 0;
    
    sort(routes.begin(), routes.end(), cmp);
    
    int curr_camera = -30001;
    
    for(int i = 0 ; i < routes.size() ; i++)
    {
        int enter = routes[i][0];
        int exit = routes[i][1];
        
        if(curr_camera < enter)
        {
            curr_camera = exit;
            answer++;
        }
    }
    
    return answer;
}
*/