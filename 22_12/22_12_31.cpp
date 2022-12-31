/* 12913¹ø ¶¥µû¸Ô±â
// ÇØ¼³ : dfs
// url : https://school.programmers.co.kr/learn/courses/30/lessons/12913

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int answer;

int find_max(vector<int> land, int idx)
{
    int result = 0;
    
    for(int i = 0 ; i < land.size() ; i++)
    {
        if(i == idx)
            continue;
        
        if(land[i] > result)
            result = land[i];
    }
    
    return result;
}

int solution(vector<vector<int> > land)
{    
    int answer = 0;
    
    for(int i = 1 ; i < land.size() ; i++)
    {
        for(int j = 0 ; j < land[i].size() ; j++)
        {
            land[i][j] += find_max(land[i - 1], j);
            answer = max(answer, land[i][j]);        
        }
    }
    
    return answer;
}
*/