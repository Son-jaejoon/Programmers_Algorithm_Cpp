/* 17680�� [1��] ĳ�� 1�� Ǯ��
// �ؼ� : LRU�� ����, ���� �� Ǯ�̰� �� Ʋ������ �𸣰ڽ��ϴ�..
// url : https://school.programmers.co.kr/learn/courses/30/lessons/17680

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int find_idx(vector<pair<string, int>> v, string st)
{
    for(int i = 0 ; i < v.size() ; i++)
    {
        if(v[i].first == st)
            return i;
    }
    
    return 0;
}

bool find_st(vector<pair<string, int>> v, string st)
{
    for(int i = 0 ; i < v.size() ; i++)
    {
        if(v[i].first == st)
            return false;
    }
    
    return true;
}

int find_least(vector<pair<string, int>> v)
{
    int idx = -1;
    int num = -1;
    
    for(int i = 0 ; i < v.size() ; i++)
    {
        int least_num = v[i].second;
        
        if(num < least_num)
        {
            idx = i;
            num = least_num;
        }
    }
    
    return idx;
}

string lower(string st)
{
    for(int i = 0 ; i < st.size() ; i++)
    {
        st[i] = tolower(st[i]);
    }
    
    return st;
}

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    
    if(cacheSize == 0)
        return 5*cities.size();
    
    vector<pair<string, int>> cache;
    
    int num = cacheSize;
    
    for(int i = 0 ; i < cities.size() ; i++)
    {
        string st = lower(cities[i]);
        
        if(cache.size() == cacheSize)
        {
            if(find_st(cache, st))
            {
                int idx = find_least(cache);
                cache[idx].first = st;
                cache[idx].second = 1;
                
                for(int i = 0 ; i < cache.size() ; i++)
                {
                    if(i == idx)
                        continue;
                    
                    cache[i].second += 1;
                }
                
                answer += 5;
            }
            else
            {
                int idx = find_idx(cache, st);
                
                for(int i = 0 ; i < cache.size() ; i++)
                {
                    if(i == idx)
                    {
                        cache[i].second = 1;
                    }
                    else
                    {
                        cache[i].second += 1;
                    }
                }
                
                answer += 1;
            }
        }
        else
        {
            cache.emplace_back(make_pair(st, num));
            answer += 5;
            num--;
        }
    }
    
    return answer;
}
*/

/* 2��Ǯ��
// �ؼ� : ť�� ����(ť�� ���� �� �� ���� ����������..)

#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;
 
void mvCache(queue<string>& Q, string str)
{
    queue<string> tmpQ;
    
    while(!Q.empty())
    {
        if(Q.front() != str)
        {
            tmpQ.push(Q.front());
        }
        
        Q.pop();
    }
    
    while(!tmpQ.empty())
    {
        Q.push(tmpQ.front());
        tmpQ.pop();
    }
    Q.push(str);
}

string toUpper(string str)
{
    for(int i = 0; i < str.size(); i++)
    {
        str[i] = toupper(str[i]);
    }
    
    return str;
}

bool strEqual(string str, queue<string> Q)
{
    int len = Q.size();
    
    for(int i = 0; i < len; i++)
    {
        if(Q.front() == str)
        {
            return true;
        }
        
        Q.pop();
    }
    return false;
}
 
int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    
    int len = cities.size();
    
    queue<string> Queue;
    
    for(int i = 0; i < len; i++)
    {
        string tmp = toUpper(cities[i]);
        
        if(Queue.size() < cacheSize)
        {
            
            if(strEqual(tmp, Queue))
            {
                mvCache(Queue, tmp);
                answer += 1;
            }
            else
            {
                Queue.push(tmp);
                answer += 5;
            }
        }
        else
        {
            if(strEqual(tmp, Queue))
            {
                mvCache(Queue, tmp);
                answer += 1;
            }else
            {
                Queue.push(tmp);
                Queue.pop();
                answer += 5;
            }
        }
    }
    
    return answer;
}
*/