#include <iostream>
#include <algorithm>
using namespace std;

/* 12980번 점프와 순간 이동
// 해설 : Top - down Vs Bottom - Up 시간효율의 문제. 

int ans = 987654321;

void jump(int idx, int cnt)
{
    if(idx == 0)
    {
        ans = min(ans, cnt);
        return;
    }
    
    if(idx / 2 >= 1 && idx % 2 == 0)
        jump(idx/2, cnt);
    else
        jump(idx - 1, cnt + 1);
    
    return;
}

int solution(int n)
{
    jump(n, 0);
    
    return ans;
}
*/