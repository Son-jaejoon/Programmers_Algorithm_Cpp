/* 17677번 [1차] 뉴스 클러스터링
// 해설 : 수학

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    vector<string> v1,v2;
    
    for(int i=1;i<str1.length();i++)
    {
        string str;
        str += str1[i-1];
        str += str1[i];
        v1.push_back(str);
        for(int j = 0 ; j < 2 ; j++)
        {
            if(str[j] >= 'A' && str[j] <= 'Z')
                continue;
            else if(str[j] >= 'a' && str[j] <= 'z')
                v1[v1.size()-1][j] = 'A' + (str[j] - 'a');
            else
            {
                v1.erase(v1.end());
                break;
            }
        }
    }
    
    for(int i = 1 ; i < str2.length() ; i++)
    {
        string str;
        str += str2[i-1];
        str += str2[i];
        v2.push_back(str);
        for(int j = 0 ; j < 2 ; j++)
        {
            if(str[j] >= 'A' && str[j] <= 'Z')
                continue;
            else if(str[j] >= 'a' && str[j] <= 'z')
                v2[v2.size()-1][j] = 'A' + (str[j] -'a');
            else
            {
                v2.erase(v2.end());
                break;
            }
        }
    }
    
    int cnt = 0;
    for(int i = 0 ; i < v1.size() ; i++)
    {
        
        for(int j = 0 ; j < v2.size() ; j++)
        {
            if(v1[i] == v2[j])
            {
                v1.erase(v1.begin()+i);
                v2.erase(v2.begin()+j);
                cnt++;
                i--;
                break;
            }
        }
    }
    if(v1.size() == 0 && v2.size() == 0)
        answer = 65536;
    else
        answer = ((double)cnt / (v1.size() + v2.size() + cnt)) * 65536;
    
    return answer;
}
*/