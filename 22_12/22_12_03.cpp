/* 17683번 [3차] 방금그곡
// 해설 : string 활용
// url :  https://school.programmers.co.kr/learn/courses/30/lessons/17683

#include <string>
#include <vector>
#include <iostream>

using namespace std;

string removeSharp(string m)
{
    for (int i = 0; i < m.size() - 1; i++)
    {
        if (m[i + 1] == '#')
        {
            m[i] = tolower(m[i]);
            m.erase(m.begin() + i + 1);
            i--;
        }
    }
    
    return m;
}

int getMusicLen(string start, string end)
{
    int sh = stoi(start.substr(0, 2));
    int eh = stoi(end.substr(0, 2));
    int sm = stoi(start.substr(3, 2));
    int em = stoi(end.substr(3, 2));
    
    return (eh * 60 + em) - (sh * 60 + sm);
}

string solution(string m, vector<string> musicinfos)
{
    string answer = "(None)";
    int answerLen = 0;

    m = removeSharp(m);

    for (string info : musicinfos)
    {
        string startTime = info.substr(0, 5);
        string endTime = info.substr(6, 5);
        int musicLen = getMusicLen(startTime, endTime);

        int nameEnd = info.find(',', 12);
        string name = info.substr(12, nameEnd - 12);
        string melody = info.substr(nameEnd + 1);
        melody = removeSharp(melody);

        if (m.length() > musicLen)
            continue;

        while (melody.size() < musicLen)
        {
            melody += melody;
        }
        
        melody = melody.substr(0, musicLen);

        if (melody.find(m) != string::npos)
        {
            if (answerLen < musicLen)
            {
                answer = name;
                answerLen = musicLen;
            }
        }
    }
    
    return answer;
}
*/