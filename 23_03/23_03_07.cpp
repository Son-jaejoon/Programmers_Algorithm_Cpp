/* 68936번 쿼드압축 후 개수 세기
// 해설 : 쿼드트리 압축
// url : https://school.programmers.co.kr/learn/courses/30/lessons/68936

#include <string>
#include <vector>

using namespace std;

int zero, one;

bool needDevide(vector<vector<int>> &arr, int i , int j, int size)
{
    int curr_color = arr[i][j];
    
    for(int y = i ; y < i + size ; y++)
    {
        for(int x = j ; x < j + size ; x++)
        {
            if(curr_color != arr[y][x])
                return true;
        }
    }
    
    return false;
}

void quadtree(vector<vector<int>> &arr, int i, int j, int size)
{
    if(needDevide(arr, i, j, size))
    {
        quadtree(arr, i, j, size/2);
        quadtree(arr, i + size/2, j, size/2);
        quadtree(arr, i, j + size/2, size/2);
        quadtree(arr, i + size/2, j + size/2, size/2);
    }
    else
    {
        int curr_color = arr[i][j];
        
        if(curr_color == 0)
            zero++;
        else
            one++;
    }
}

vector<int> solution(vector<vector<int>> arr) {
    int size = arr.size();
    
    vector<int> answer;
    
    quadtree(arr, 0, 0, size);
    
    answer.emplace_back(zero);
    answer.emplace_back(one);
    
    return answer;
}
*/