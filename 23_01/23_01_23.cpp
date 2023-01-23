/* 42747번 H-index
// 해설 : 정렬
// url : https://school.programmers.co.kr/learn/courses/30/lessons/42747

#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> citations) {
    
    int answer = 0;
    int size = citations.size();
    
    set<int> result;

    for(int i=1; i<=10000; i++)
    {
        int tmp = 0;
        int flag = 0;
    
        for(int j=0; j<size; j++)
        {
            if(citations[j]>=i)
                tmp++;
          
            if(tmp>=i)
            {
                flag =1;
                break;
            }
        }
        
        if(flag==1)
        {
            result.insert(i);
        }
    }
    
    answer = *(result.end()--);
    return answer;
}
*/