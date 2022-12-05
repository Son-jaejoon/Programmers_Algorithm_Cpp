/* 118667번 두 큐 합 같게 만들기
// 해설 : 구현, 넣었다 뺏다 반복
// url : https://school.programmers.co.kr/learn/courses/30/lessons/118667

#include <string>
#include <vector>
#include <queue>
using namespace std;

long long sum = 0, sum2 = 0;
queue<int> q, q2;

void setting(vector<int> queue1, vector<int> queue2);
int equal_queue();

int solution(vector<int> queue1, vector<int> queue2) 
{
    int answer = 0;
    
    setting(queue1, queue2);
    answer = equal_queue();
    
    return answer;
}

void setting(vector<int> queue1, vector<int> queue2)
{
    for (int num : queue1) 
    {
        sum += num;
        q.push(num);
    }

    for (int num : queue2) 
    {
        sum2 += num;
        q2.push(num);
    }
}

int equal_queue()
{
    int idx = 0, idx2 = 0;
    int maxIdx = q.size()*2;
    int answer = 0;

    while (idx < maxIdx && idx2 < maxIdx)
    {
        if (sum == sum2)
        {
            return answer;
        }

        answer++;

        if (sum < sum2)
        {
            int cur = q2.front();
            q2.pop();

            q.push(cur);
            sum += cur;
            sum2 -= cur;
            idx2++;
        }
        else
        {
            int cur = q.front();
            q.pop();

            q2.push(cur);
            sum2 += cur;
            sum -= cur;
            idx++;
        }
    }
    
    return -1;
}
*/