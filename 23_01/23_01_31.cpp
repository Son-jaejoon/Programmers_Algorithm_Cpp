/* 42579번 베스트앨범
// 해설 : 해시, unordered_map
// url : https://school.programmers.co.kr/learn/courses/30/lessons/42579

#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> left, pair<int, int> right)
{
    if (left.first > right.first)
    {
        return true;
    }
    else if (left.first == right.first)
    {
        if (left.second < right.second)
        {
            return true;
        }
    }
    
    return false;
}

vector<int> solution(vector<string> genres, vector<int> plays)
{
    vector<int> answer;
    unordered_map<string, int> summap;
    unordered_map<string, vector<pair<int, int>>> genmap;
    
    for (int i = 0; i < genres.size(); i++)
    {
        summap[genres[i]] += plays[i];
        genmap[genres[i]].push_back(make_pair(plays[i], i));
    }
    
    vector<pair<int, string>> fororder;
    
    for (auto x : summap)
    {
        fororder.push_back(make_pair(x.second, x.first));
    }
    
    sort(fororder.begin(), fororder.end());
    
    while (fororder.size() > 0)
    {
        pair<int, string> temp = fororder.back();
        fororder.pop_back();
        vector<pair<int, int>> a = genmap[temp.second];
        
        sort(a.begin(), a.end(), compare);
        
        for (int i = 0; i < a.size() && i < 2; i++)
        {
            answer.push_back(a[i].second);
        }
    }

    return answer;
}
*/