#include <string>
#include <vector>
#include <iostream>

using namespace std;

/* 81302번 거리두기 확인하기
// 해설 : 단순 구현
// url : https://school.programmers.co.kr/learn/courses/30/lessons/81302

vector<int> ans;

void test(vector<vector<int>> exam)
{   
    for(int i = 0 ; i < 5 ; i++)
    {
        for(int j = 0 ; j < 5 ; j++)
        {
            if(exam[i][j] == 1)
            {
                if(j != 0)
                {
                    if(exam[i][j - 1] == 2)
                    {
                        if(i != 4)
                        {
                            if(exam[i + 1][j - 1] == 1)
                            {
                                ans.emplace_back(0);
                                return;
                            }
                        }
                    }
                }
                
                if(j != 4)
                {
                    if(exam[i][j + 1] == 2)
                    {
                        if(i != 4)
                        {
                            if(exam[i + 1][j + 1] == 1)
                            {
                                ans.emplace_back(0);
                                return;
                            }
                        }
                        
                        if(j != 3)
                        {
                            if(exam[i][j + 2] == 1)
                            {
                                ans.emplace_back(0);
                                return;
                            }
                        }
                    }
                    else if(exam[i][j + 1] == 1)
                    {
                        ans.emplace_back(0);
                        return;
                    }
                }
                
                if(i != 4)
                {
                    if(exam[i + 1][j] == 2)
                    {
                        if(j != 4)
                        {
                            if(exam[i + 1][j + 1] == 1)
                            {
                                ans.emplace_back(0);
                                return;
                            }
                        }
                        
                        if(j != 0)
                        {
                            if(exam[i + 1][j - 1] == 1)
                            {
                                ans.emplace_back(0);
                                return;
                            }
                        }
                        
                        if(i != 3)
                        {
                            if(exam[i + 2][j] == 1)
                            {
                                ans.emplace_back(0);
                                return;
                            }
                        }
                    }
                    else if(exam[i + 1][j] == 1)
                    {
                        ans.emplace_back(0);
                        return;
                    }
                }
            }
        }
    }
    
    ans.emplace_back(1);
    return;
}

vector<int> solution(vector<vector<string>> places) {
    for(int i = 0 ; i < places.size() ; i++)
    {
        vector<vector<int>> exam;
        exam.assign(5, vector<int>(5, 0));
        
        for(int j = 0 ; j < places[i].size() ; j++)
        {
            string st = places[i][j];
            
            for(int k = 0 ; k < 5 ; k++)
            {
                if(st[k] == 'P')
                    exam[j][k] = 1;        
                else if(st[k] == 'O')
                    exam[j][k] = 2;
                else
                    exam[j][k] = 0;
            }
        }
        test(exam);
    }
    
    return ans;
}
*/