#include <string>
#include <vector>

using namespace std;

/* 64061�� ũ���� �����̱�
// �ؼ� : vector�� ���� ���� + ����?
// url : https://school.programmers.co.kr/learn/courses/30/lessons/64061


// ùǮ�� : üũ�� �� �������� �� ���ĸ� ����Ͽ� Ǯ����.
            �Ӹ��� �������� �� �Լ��� �����Ͽ���.
int num;
vector<int> baguni;

vector<vector<int>> select(vector<vector<int>> board, int idx)
{
    num = 0;
    idx = idx - 1;

    for(int i = 0 ; i < board.size() ; i++)
    {
        if(board[i][idx] == 0)
            continue;

        num = board[i][idx];
        board[i][idx] = 0;
        break;
    }

    return board;
}

int chk(int cur_ans)
{
    if(baguni.size() == 1)
        return cur_ans;

    int cur_idx = baguni.size() - 1;
    int pref_idx = baguni.size() - 2;

    if(baguni[cur_idx] == baguni[pref_idx])
    {
        baguni.erase(baguni.begin() + cur_idx);
        baguni.erase(baguni.begin() + pref_idx);
        return cur_ans + 2;
    }

    return cur_ans;
}

int solution(vector<vector<int>> board, vector<int> moves)
{
    int answer = 0;

    for(int i = 0 ; i < moves.size() ; i++)
    {
        board = select(board, moves[i]);

        if(num == 0)
            continue;

        baguni.emplace_back(num);
        answer = chk(answer);
    }

    return answer;
}
*/


/* �ι�° Ǯ�� : chk�Լ��� vector�� ���� �� üũ�Ͽ� �ð��� �ּ�ȭ ���״�.

int num;

vector<vector<int>> select(vector<vector<int>> board, int idx)
{
    num = 0;
    idx = idx - 1;
    
    for(int i = 0 ; i < board.size() ; i++)
    {
        if(board[i][idx] == 0)
            continue;
        
        num = board[i][idx];
        board[i][idx] = 0;
        break;
    }
    
    return board;
}

int solution(vector<vector<int>> board, vector<int> moves)
{
    int answer = 0;
    vector<int> baguni;
    
    for(int i = 0 ; i < moves.size() ; i++)
    {
        board = select(board, moves[i]);
        
        if(num == 0)
            continue;
        
        if(baguni.size() != 0)
        {
            if(baguni[baguni.size() - 1] == num)
            {
                baguni.pop_back();
                answer += 2;
            }
            else
                baguni.emplace_back(num);
            
            continue;
        }
        
        baguni.emplace_back(num);
    }
    
    return answer;
}
*/