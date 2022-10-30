#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/* 67257번 수식 최대화
// 해설 : 입력값을 숫자와 연산자로 나눔, 이후 순열로 값 계산 / next_permutation의 이용

long long calculate(long long first, long long second, char op)
{
    if(op == '+')
    {
        return first + second;
    }
    else if(op == '-')
    {
        return first - second;
    }
    else
    {
        return first * second;
    }
}

long long solution(string expression) {
    long long answer = 0;
    
    vector<char> priority = {'*', '+', '-'};
    vector<long long> save;
    vector<char> op;
    string num;
    
    for(int i = 0 ; i < expression.size() ; i++)
    {
        if(expression[i] == '*' || expression[i] == '+' || expression[i] == '-')
        {
            save.emplace_back(stoi(num));
            op.emplace_back(expression[i]);
            num.clear();
        }
        else
        {
            num.push_back(expression[i]);
        }
    }
    save.emplace_back(stoi(num));
    
    do
    {
        vector<long long> tmp_save = save;
        vector<char> tmp_op = op;
        
        for(int i = 0 ; i < 3 ; i++)
        {
            for(int j = 0 ; j < tmp_op.size() ; j++)
            {
                if(priority[i] == tmp_op[j])
                {
                    tmp_save[j] = calculate(tmp_save[j], tmp_save[j + 1], priority[i]);
                    
                    tmp_save.erase(tmp_save.begin() + j + 1);
                    tmp_op.erase(tmp_op.begin() + j);
                    j--;
                }
            }
        }
        
        answer = max(answer, abs(tmp_save.front()));
    }
    while(next_permutation(priority.begin(), priority.end()));
    
    return answer;
}
*/