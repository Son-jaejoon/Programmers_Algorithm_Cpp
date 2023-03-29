/* 92334번 신고 결과 받기
// 해설 : 구현
// url : https://school.programmers.co.kr/learn/courses/30/lessons/92334

#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    
    map<string, vector<string>> mp;
    map<string, int> report_cnt;
    
    for(int i = 0 ; i < report.size() ; i++)
    {
        int idx = find(report[i].begin(), report[i].end(), ' ') - report[i].begin();
        
        string user_id = report[i].substr(0, idx);
        string report_id = report[i].substr(idx + 1);
        
        if(find(mp[user_id].begin(), mp[user_id].end(), report_id) != mp[user_id].end())
            continue;
        
        mp[user_id].emplace_back(report_id);
        
        if(report_cnt.find(report_id) != report_cnt.end())
            report_cnt[report_id]++;
        else
            report_cnt.insert(make_pair(report_id, 1));
        }
    
    for(int idx = 0 ; idx < id_list.size() ; idx++)
    {
        int cnt = 0;
        
        for(int i = 0 ; i < mp[id_list[idx]].size() ; i++)
        {
            if(report_cnt[mp[id_list[idx]][i]] >= k)
                cnt++;
        }
        
        answer.emplace_back(cnt);
    }
    
    return answer;
}
*/

/* 77884번 약수의 개수와 덧셈
// 해설 : 수학
// url : https://school.programmers.co.kr/learn/courses/30/lessons/77884

#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    
    int answer = 0;
    
    for(int i = left ; i <= right ; i++)
    {
        int cnt = 1;
        
        for(int j = 2 ; j <= i ; j++)
        {
            if(i % j == 0)
                cnt++;
        }
        
        if(cnt % 2 == 0)
            answer += i;
        else
            answer -= i;
    }
    
    return answer;
}
*/

/* 70128번 내적
// 해설 : 수학
// url : https://school.programmers.co.kr/learn/courses/30/lessons/70128

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 0;
    
    for(int i = 0 ; i < a.size() ; i++)
    {
        answer += a[i]*b[i];
    }
    
    return answer;
}
*/

/* 86051번 없는 숫자 더하기
// 해설 : 수학
// url : https://school.programmers.co.kr/learn/courses/30/lessons/86051

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 45;

    for(int num : numbers)
        answer -= num;
    
    return answer;
}
*/

/* 76501번 음양 더하기
// 해설 : 수학
// url : https://school.programmers.co.kr/learn/courses/30/lessons/76501

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    
    for(int i = 0 ; i < absolutes.size() ; i++)
    {
        if(signs[i])
            answer += absolutes[i];
        else
            answer -= absolutes[i];
    }
    
    return answer;
}
*/