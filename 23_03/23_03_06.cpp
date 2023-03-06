/* 161989¹ø µ¡Ä¥ÇÏ±â
//ÇØ¼³ : ±¸Çö
// url : https://school.programmers.co.kr/learn/courses/30/lessons/161989

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int idx = 0;
    
    while(idx < section.size())
    {
        answer++;
        
        int curr_node = section[idx];
        int include_node = curr_node + m - 1;
        
        if(upper_bound(section.begin(), section.end(), include_node) == section.end())
            break;
        else
            idx = upper_bound(section.begin(), section.end(), include_node) - section.begin();
    }
    
    return answer;
}
*/