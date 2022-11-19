#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

/* 17679번 [1차]프렌즈 4블록
// 해설 : 구현

int solution(int m, int n, vector<string> board) {
    int answer = 0;
    
    vector<vector<string>> v;
    v.assign(m, vector<string>(n, "0"));
    
    for(int i = 0 ; i < m ; i++)
    {
        string st = board[i];
        
        for(int j = 0 ; j < n ; j++)
        {
            v[i][j] = st[j];
        }
    }
    
    bool chk = true;
    
    int dy[] = {1, 0, 1};
    int dx[] = {0, 1, 1};
    
    vector<vector<bool>> square;
    square.assign(m, vector<bool>(n, false));
    
    while(chk)
    {
        vector<vector<bool>> square;
        square.assign(m, vector<bool>(n, false));
        
        chk = false;
        
        for(int i = 0 ; i < m ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                if(v[i][j] == "0")
                    continue;
                
                bool ok = true;
                
                for(int k = 0 ; k < 3 ; k++)
                {
                    int ny = i + dy[k];
                    int nx = j + dx[k];
                    
                    if(ny < 0 || nx < 0 || ny >= m || nx >= n)
                    {
                        ok = false;
                        break;
                    }
                    
                    if(v[i][j] != v[ny][nx])
                    {
                        ok = false;
                        break;
                    }
                }
                
                if(ok)
                {
                    chk = true;
                    square[i][j] = true;
                    
                    for(int k = 0 ; k < 3 ; k++)
                    {
                        square[i + dy[k]][j + dx[k]] = true;
                    }
                }
            }
        }
        
        for(int i = 0 ; i < m ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                if(square[i][j])
                {
                    cout << i << " " << j << endl;
                    v[i][j] = "0";
                    answer += 1;
                }
            }
        }
        
        for(int i = m - 1 ; i >= 0 ; i--)
        {
            for(int j = n - 1 ; j >= 0 ; j--)
            {
                if(v[i][j] == "0")
                {
                    for(int k = i - 1 ; k >= 0 ; k--)
                    {
                        if(v[k][j] == "0")
                            continue;
                        
                        v[i][j] = v[k][j];
                        v[k][j] = "0";
                        break;
                    }
                }
            }
        }
    }
    
    return answer;
}
*/