/* 42587번 프린터
// 해설 : 구현
// url : https://school.programmers.co.kr/learn/courses/30/lessons/42587

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    int idx = -1;
    int cnt = 0;

    while(1)
    {
        idx++;
        idx %= priorities.size();

        int curr = priorities[0];
        bool chk = true;

        for(int i = 1 ; i < priorities.size() ; i++)
        {
            if(priorities[i] > curr && priorities[i] != 10)
            {
                priorities.emplace_back(curr);
                priorities.erase(priorities.begin());
                chk = false;
                break;
            }
        }

        if(chk)
        {
            if(curr != 10)
                cnt++;

            if(idx == location)
            {
                answer = cnt;
                break;
            }
            else
            {
                priorities.erase(priorities.begin());
                priorities.emplace_back(10);
            }
        }
    }

    return answer;
}
*/