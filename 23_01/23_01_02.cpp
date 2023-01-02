/* 87946번 피로도
// 해설 : dfs
// url : https://school.programmers.co.kr/learn/courses/30/lessons/87946

#include <string>
#include <vector>

using namespace std;

int answer;

void dfs(int k, vector<vector<int>> dungeons, vector<bool> visited, int cnt)
{
    if(answer < cnt)
    {
        answer = cnt;
    }
    
    for(int i = 0 ; i < dungeons.size() ; i++)
    {
        if(visited[i])
            continue;
        
        int min_fatigue = dungeons[i][0];
        int use_fatigue = dungeons[i][1];
        
        if(k >= min_fatigue)
        {
            visited[i] = true;
            dfs(k - use_fatigue, dungeons, visited, cnt + 1);
            visited[i] = false;
        }
    }
}

int solution(int k, vector<vector<int>> dungeons) {    
    
    vector<bool> visited(dungeons.size(), false);
    
    dfs(k, dungeons, visited, 0);
    
    return answer;
}
*/