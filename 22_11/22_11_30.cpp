#include <string>
#include <vector>
#include <iostream>

using namespace std;

/* 68645번 삼각 달팽이
// 해설 : 구현, 쉽게 풀이한 것을 보니 생각이 참 많아진다.
// url : https://school.programmers.co.kr/learn/courses/30/lessons/68645

vector<vector<int>> v;
int y, x, num;

void down()
{
    cout << "down" << endl;
    for(int i = y + 1 ; i < v.size() ; i++)
    {
        if(v[i][x] != 0)
        {
            y = i - 1;
            break;
        }
        
        v[i][x] = ++num;
        
        if(i == v.size() - 1)
            y = i;
    }
}

void right()
{
    cout << "right" << endl;
    
    for(int i = x + 1 ; i < v.size() ; i++)
    {
        if(v[y][i] != 0)
        {
            x = i - 1;
            break;
        }
        
        v[y][i] = ++num;
        
        if(i == v.size() - 1)
            x = i;
    }
}

void up()
{
    cout << "up" << endl;
    int j = x - 1;
    
    for(int i = y - 1 ; i >= 1 ; i--)
    {
        if(v[i][j] != 0)
        {
            y = i + 1;
            x = j + 1;
            break;
        }
        
        v[i][j] = ++num;
        j--;
    }
}

vector<int> solution(int n) {
    vector<int> answer;

    v.assign(n + 1, vector<int>(n + 1, 0));
    
    y = x = 1;
    v[y][x] = 1;
    num = 1;
    int move = 1; // down, right, up
    
    while(move%4 != 0)
    {
        if(move == 1)
        {
            down();
            
            if(x + 1 > v.size())
                move = 4;
            else if(v[y][x + 1] != 0)
                move = 4;
            else
                move = 2;
        }
        else if(move == 2)
        {
            right();
            
            if(y - 1 == 1 && x - 1 == 1)
                move = 4;
            else if(v[y - 1][x - 1] != 0)
                move = 4;
            else
                move = 3;
        }
        else if(move == 3)
        {
            up();
            
            if(y + 1 > n)
                move = 4;
            else if(v[y + 1][x] != 0)
                move = 4;
            else
                move = 1;
        }
    }
    
    for(int i = 1 ; i < v.size() ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            answer.emplace_back(v[i][j]);
        }
    }
    
    return answer;
}
*/