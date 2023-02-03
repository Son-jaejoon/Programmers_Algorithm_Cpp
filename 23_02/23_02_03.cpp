/* 42839번 소수 찾기
// 해설 : 소수판별
// url : https://school.programmers.co.kr/learn/courses/30/lessons/42839

#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int solution(string numbers) {
    int answer = 0;
    
    set<int> numbers_int;
    
    sort(numbers.begin(), numbers.end());

    do 
    {
        for(int i = 1; i <= numbers.length(); i++)
        {
            numbers_int.insert(stoi(numbers.substr(0,i)));
        }
        
    } while (next_permutation(numbers.begin(), numbers.end()));
    

    for (int number: numbers_int)
    {
        bool isPrime = true;

        if (number <= 1)
            continue;

        for(int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            answer++;
    }

    return answer;
}
*/