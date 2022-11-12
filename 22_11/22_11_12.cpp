/* 92335번 k진수에서 소수 개수 구하기
// 해설 : 에라토스테네스의 체, 진수 바꾸기 

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool its_prime(long long s)
{
    if(s < 2)
        return false;
    
    for(long long i = 2 ; i*i <= s ; i++)
    {
        if(s % i == 0)
            return false;
    }
    
    return true;
}

int count_prime(string str)
{
    int result = 0;
    string tmp = "";
    
    for(int i = 0 ; i < str.size() ; i++)
    {
        if(!tmp.empty() && str[i] == '0')
        {
            long long cur_num = stoll(tmp);
            if(its_prime(cur_num))
                result++;
            tmp = "";
        }
        else
            tmp.push_back(str[i]);
    }
    
    if(!tmp.empty())
    {
        long long cur_num = stoll(tmp);
        
        if(its_prime(cur_num))
            result++;
    }
    
    return result;
}

string make_k(int n , int k)
{
    string tmp = "";
    
    while(n)
    {
        tmp += to_string(n % k);
        n /= k;
    }
    
    return string(tmp.rbegin(), tmp.rend());
}

int solution(int n, int k) {
    int answer = -1;
    
    string convert_k = make_k(n, k);
    return answer = count_prime(convert_k);
}
*/