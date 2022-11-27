/* 77485번 행렬 테두리 회전하기
// 해설 : 구현
// url : https://school.programmers.co.kr/learn/courses/30/lessons/77485

#include <string>
#include <vector>

using namespace std;

vector<vector<int>> v;
vector<vector<int>> tmp;

int round(int x1, int y1, int x2, int y2)
{
    int ans = 987654321;
    
    for(int i = x1 ; i <= x2 ; i++)
    {
        if(i == x1)
        {
            v[i][y1] = tmp[i + 1][y1];
            
            ans = min(ans, v[i][y1]);
            
            for(int j = y1 + 1 ; j <= y2 ; j++)
            {
                v[i][j] = tmp[i][j - 1];
                
                ans = min(ans, v[i][j]);
            }
        }
        else if(i == x2)
        {
            v[i][y2] = tmp[i - 1][y2];
            
            ans = min(ans, v[i][y2]);
            
            for(int j = y1 ; j < y2 ; j++)
            {
                v[i][j] = tmp[i][j + 1];
                
                ans = min(ans, v[i][j]);
            }
        }
        else
        {
            v[i][y1] = tmp[i + 1][y1];
            v[i][y2] = tmp[i - 1][y2];
            
            ans = min(ans, min(v[i][y1], v[i][y2]));
        }
    }
    
    copy(v.begin(), v.end(), tmp.begin());
    
    return ans;
}

vector<int> solution(int rows, int columns, vector<vector<int>> queries) {
    vector<int> answer;
    
    v.assign(rows, vector<int>(columns, 0));
    tmp.assign(rows, vector<int>(columns, 0));
    
    for(int i = 0 ; i < rows ; i++)
    {
        for(int j = 0 ; j < columns ; j++)
        {
            int idx = i * columns + j + 1;
            
            v[i][j] = idx;
            tmp[i][j] = idx;
        }
    }
    
    int x1, x2, y1, y2;
    
    for(int i = 0 ; i < queries.size() ; i++)
    {
        x1 = queries[i][0] - 1;
        y1 = queries[i][1] - 1;
        x2 = queries[i][2] - 1;
        y2 = queries[i][3] - 1;
        
        answer.emplace_back(round(x1, y1, x2, y2));
    }
    
    return answer;
}

*/