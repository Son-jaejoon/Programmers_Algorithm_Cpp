#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/* 67256번 키패드 누르기
// 해설 : 배열특징 이용하기
// url : https://school.programmers.co.kr/learn/courses/30/lessons/67256
*/

string ans;

void move(vector<int> numbers, string answer, int hand, int idx, int left, int right)
{
    if(idx == numbers.size())
    {
        ans = answer;
        return;
    }
    
    int num = numbers[idx] - 1;
    if(num == -1)
        num = 10;
    
    if(num == 0 || num == 3 || num == 6)
    {
        answer.push_back('L');
        move(numbers, answer, hand, idx + 1, num, right);
    }
    else if(num == 2 || num == 5 || num == 8)
    {
        answer.push_back('R');
        move(numbers, answer, hand, idx + 1, left, num);
    }
    else
    {
        int num_y = num/3;
        int num_x = num%3;
        
        int left_y = left/3;
        int left_x = left%3;
        
        int right_y = right/3;
        int right_x = right%3;
        
        int left_cost = abs(left_y - num_y) + abs(left_x - num_x);
        int right_cost = abs(right_y - num_y) + abs(right_x - num_x);
        
        if(left_cost < right_cost)
        {
            answer.push_back('L');
            move(numbers, answer, hand, idx + 1, num, right);
        }
        else if(left_cost == right_cost)
        {
            if(hand == 0)
            {
                answer.push_back('L');
                move(numbers, answer, hand, idx + 1, num, right);
            }
            else
            {
                answer.push_back('R');
                move(numbers, answer, hand, idx + 1, left, num);
            }
        }
        else
        {
            answer.push_back('R');
            move(numbers, answer, hand, idx + 1, left, num);
        }
    }
}

string solution(vector<int> numbers, string hand) {
    string answer = "";
    
    if(hand == "left")
    {
        move(numbers, answer, 0, 0, 9, 11);    
    }
    else
    {
        move(numbers, answer, 1, 0, 9, 11);
    }
    
    return answer = ans;
}