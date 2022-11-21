/* 17686번 [3차] 파일명 정렬
// 해설 : 조건에 맞는 정렬방식을 하는 것, Cpp의 sort를 어떻게 하는지 알면 쉽게 해결할 수 있다.
// url : https://school.programmers.co.kr/learn/courses/30/lessons/17686

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct info
{
    int idx, number;
    string head;
};

info create(int idx, string head, int number)
{
    info n_info;
    
    n_info.idx = idx;
    n_info.head = head;
    n_info.number = number;
    
    return n_info;
}

bool cmp(info &f1, info &f2)
{
    if(f1.head == f2.head)
    {
        if(f1.number == f2.number)
            return f1.idx < f2.idx;
        else
            return f1.number < f2.number;
    }
    else
    {
        return f1.head < f2.head;
    }
}

vector<string> solution(vector<string> files) {
    vector<string> answer;
    
    vector<info> v;
    
    for(int i = 0 ; i < files.size() ; i++)
    {
        string st = files[i];
        
        int idx = i;
        string head = "";
        string tmp_number = "";
        
        int k = 0;
        
        while(k < st.size())
        {
            if('0' <= st[k] && st[k] <= '9')
            {
                break;
            }
            
            head += tolower(st[k]);
            
            k++;
        }
        
        while(k < st.size())
        {
            if('0' > st[k] || st[k] > '9')
                break;
            
            tmp_number += st[k];
            
            k++;
        }
        
        int number = stoi(tmp_number);
        
        v.emplace_back(create(idx, head, number));
    }
    
    sort(v.begin(), v.end(), cmp);
    
    for(int i = 0 ; i < files.size() ; i++)
    {
        answer.emplace_back(files[v[i].idx]);
    }
    
    return answer;
}
*/