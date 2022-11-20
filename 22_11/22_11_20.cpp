/* 49994번 방문 길이
// 해설 : 구현, map이용
// url : https://school.programmers.co.kr/learn/courses/30/lessons/49994

#include <string>
#include <vector>
#include <map>

using namespace std;

vector<vector<bool>> visited;

int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

int direction(string st)
{
    if(st == "U")
        return 0;
    else if(st == "D")
        return 1;
    else if(st == "L")
        return 2;
    else if(st == "R")
        return 3;
}

int solution(string dirs) {
    int answer = 0;
    
    map<pair<tuple<int, int, int>, int>, int> m;
    
    int y = 0, x = 0;
    
    for(int i = 0 ; i < dirs.size() ; i++)
    {
        string st = "";
        st = dirs[i];
        
        int ny = y + dy[direction(st)];
        int nx = x + dx[direction(st)];
        
        if(ny < -5 || nx < -5 || ny > 5 || nx > 5)
            continue;
        
        m.insert(make_pair(make_pair(make_tuple(y, x, ny), nx), 1));
        m.insert(make_pair(make_pair(make_tuple(ny, nx, y), x), 1));
        
        y = ny;
        x = nx;
    }
    
    answer = m.size() / 2;
    
    return answer;
}
*/