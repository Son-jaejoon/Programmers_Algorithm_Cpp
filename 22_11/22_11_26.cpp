/* 12979번 기지국 설치
// 해설 : 구현
// 참고 : https://school.programmers.co.kr/learn/courses/30/lessons/12979

#include <iostream>
#include <vector>
using namespace std;

int solution(int n, vector<int> stations, int w)
{
    int answer = 0;
    int now = 1;
    int station_index = 0;
    
    while(now <= n)
    {
        if(now >= stations[station_index] - w && now <= stations[station_index] + w)
        {
            now = stations[station_index] + w;
            station_index++;
        }
        else
        {
            answer++;
            now += w * 2;
        }
        
        now++;
    }
    
    return answer;
}
*/