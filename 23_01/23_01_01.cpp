/* 43163번 단어 변환
// 해설 : dfs
// url : https://school.programmers.co.kr/learn/courses/30/lessons/43163

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int answer = 987654321;

void dfs(string begin, string target, vector<string> words, int cnt, vector<bool> visited)
{
    if(cnt > answer)
        return;
    
    if(begin == target)
    {
        if(answer > cnt)
            answer = cnt;
        
        return;
    }
    
    for(int i = 0 ; i < words.size() ; i++)
    {
        if(visited[i])
            continue;
        
        string st = words[i];
        
        int equal = 0;
        
        for(int j = 0 ; j < st.size() ; j++)
        {
            if(st[j] == begin[j])
                equal++;
        }
        
        if(begin.size() - 1 == equal)
        {
            visited[i] = true;
            dfs(st, target, words, cnt + 1, visited);
            visited[i] = false;
        }
    }
}

int solution(string begin, string target, vector<string> words) {
    
    if(find(words.begin(), words.end(), target) == words.end())
        return 0;
    
    vector<bool> visited(words.size(), false);
    
    dfs(begin, target, words, 0, visited);
    
    if(answer == 987654321)
        return 0;
    
    return answer;
}
*/