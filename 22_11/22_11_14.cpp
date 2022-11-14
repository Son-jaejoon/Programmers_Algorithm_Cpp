/* 42888번 오픈채팅방
// 해설 : 해쉬맵, stringstream
// 참고 : https://roadtosuccess.tistory.com/83
// url : https://school.programmers.co.kr/learn/courses/30/lessons/42888

#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    unordered_map<string, string> umap;
    string cmd, uid, nickname;

    for (string& s : record) {
        stringstream ss(s);
        ss >> cmd >> uid >> nickname;

        if (cmd == "Enter" || cmd == "Change") {
            umap[uid] = nickname;
        }
    }

    for (string& s : record) {
        stringstream ss(s);
        ss >> cmd >> uid >> nickname;
        if (cmd == "Enter") {
            answer.push_back(umap[uid] + "님이 들어왔습니다.");
        } else if (cmd == "Leave") {
            answer.push_back(umap[uid] + "님이 나갔습니다.");
        }
    }

    return answer;
}
*/