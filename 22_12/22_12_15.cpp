/* 12977번 소수 만들기
// 해설 : 소수판별

#include <vector>
#include <iostream>
using namespace std;

int is_prime(int num)
{
    if(num == 0 || num == 1)
        return 0;
    
    for(int i = 2 ; i*i <= num ; i++)
    {
        if(num % i == 0)
            return 0;
    }
    
    return 1;
}

int solution(vector<int> nums) {
    int answer = 0;
        
    for(int i = 0 ; i < nums.size() ; i++)
    {
        for(int j = i + 1 ; j < nums.size() ; j++)
        {
            for(int k = j + 1 ; k < nums.size() ; k++)
            {
                int sum = nums[i] + nums[j] + nums[k];
                
                answer += is_prime(sum);
            }
        }
    }
    
    return answer;
}
*/