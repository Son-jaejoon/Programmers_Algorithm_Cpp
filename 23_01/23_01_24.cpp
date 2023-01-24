/* 12949¹ø Çà·ÄÀÇ °ö¼À
// ÇØ¼³ : Çà·Ä °ö
// url : https://school.programmers.co.kr/learn/courses/30/lessons/12949

#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    
    for(int i=0; i<arr1.size(); i++)
    {
        vector<int> v;
        
        for(int j=0; j<arr2[0].size(); j++)
        {
            int sum = 0;
            
            for(int k=0; k<arr1[0].size(); k++)
            {
                sum += arr1[i][k] * arr2[k][j];
            }
            
            v.push_back(sum);
        }
        
        answer.push_back(v);
    }
    
    return answer;
}
*/