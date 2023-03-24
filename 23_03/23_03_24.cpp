/*  150368번 이모티콘 할인 행사
// 해설 : dfs
// url : https://school.programmers.co.kr/learn/courses/30/lessons/150368

#include <string>
#include <vector>

using namespace std;

int max_emoticon_plus, max_sales;

void calc(vector<int> &sales_rate, vector<vector<int>> &users, vector<int> &emoticons)
{
    int emoticon_plus = 0;
    int sales = 0;
    
    for(auto user : users)
    {
        int tmp = 0;
        
        for(int i = 0 ; i < sales_rate.size() ; i++)
        {
            if(user[0] > sales_rate[i])
            {
                continue;
            }
            
            tmp += (emoticons[i] / 100) * (100 - sales_rate[i]);
        }
        
        if(tmp >= user[1])
            emoticon_plus++;
        else
            sales += tmp;
    }
    
    if(max_emoticon_plus > emoticon_plus)
        return;
    
    if(max_emoticon_plus == emoticon_plus && max_sales >= sales)
        return;
    
    max_emoticon_plus = emoticon_plus;
    max_sales = sales;
}

void dfs(vector<int> sales_rate, vector<vector<int>> &users, vector<int> &emoticons)
{
    if(sales_rate.size() == emoticons.size())
    {
        calc(sales_rate, users, emoticons);
        return;
    }
    
    for(int i = 10 ; i <= 40 ; i += 10)
    {
        sales_rate.emplace_back(i);
        dfs(sales_rate, users, emoticons);
        sales_rate.pop_back();
    }
}

vector<int> solution(vector<vector<int>> users, vector<int> emoticons) {
    vector<int> answer;
    vector<int> rate;
    
    dfs(rate, users, emoticons);
    
    answer.emplace_back(max_emoticon_plus);
    answer.emplace_back(max_sales);
    
    return answer;
}
*/