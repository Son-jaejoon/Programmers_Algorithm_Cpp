/* 72410�� �ű� ���̵� ��õ
// �ؼ� : ���ڿ� ����
// url : https://school.programmers.co.kr/learn/courses/30/lessons/72410

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string new_id) {
    
    //1�ܰ� && 2�ܰ�
    for(int i = 0 ; i < new_id.size() ; i++)
    {
        if('A' <= new_id[i] && new_id[i] <= 'Z')
            new_id[i] = tolower(new_id[i]);
        
        if(!(('a' <= new_id[i] && new_id[i] <= 'z')|| ('0' <= new_id[i] && new_id[i] <= '9') || new_id[i] == '-' || new_id[i] == '_' || new_id[i] == '.'))
        {
            new_id.erase(i, 1);
            i--;
        }
    }
    
    //3�ܰ�
    for(int i = 1 ; i < new_id.size() ; i++)
    {
        if(new_id[i] == '.')
        {
            if(new_id[i - 1] == '.')
            {
                new_id.erase(i, 1);
                i--;
            }
        }
    }
    
    //4�ܰ�
    if(new_id[0] == '.')
    {
        new_id.erase(0, 1);
    }
    
    if(new_id[new_id.size() - 1] == '.')
    {
        new_id.erase(new_id.size() - 1, 1);
    }
    
    //5�ܰ�
    if(new_id.size() == 0)
        new_id = "a";
    
    //6�ܰ�
    if(new_id.size() >= 16)
    {
        new_id = new_id.substr(0, 15);
        
        if(new_id[14] == '.')
        {
            new_id.erase(14, 1);
        }
    }
    
    //7�ܰ�
    while(new_id.size() <= 2)
    {
        new_id += new_id[new_id.size() - 1];
    }
    
    return new_id;
}
*/