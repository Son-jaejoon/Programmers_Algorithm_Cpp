/* 12953번 N개의 최소공배수
// 해설 : 유클리드 호제법
// url : https://school.programmers.co.kr/learn/courses/30/lessons/12953?language=cpp

#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    int c;
    
    while(b!=0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    
    return a;
}

int lcs(int a, int b)
{
    return a * b / gcd(a, b);
}

int solution(vector<int> arr){
    
    int ans = 1;

    for(int i = 0; i < arr.size() ; i++)
    {
        ans = lcs(ans, arr[i]);
    }
    
    return ans;
}
*/