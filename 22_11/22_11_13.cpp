/* 70129�� ���� ��ȯ �ݺ��ϱ�
// �ؼ� : ������ȯ

#include <string>
#include <vector>

using namespace std;



vector<int> solution(string s) {
    vector<int> answer;
    
    int time = 0;
    int erase_zero = 0;
    
    while(s != "1")
    {
        int cnt = 0;
        string st = "";
        
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] == '0')
                cnt++;
        }
        
        erase_zero += cnt;
        
        cnt = s.size() - cnt;
        
        while(cnt)
        {
            if(cnt % 2)
            {
                st += to_string(1);
            }
            else
                st += to_string(0);
            
            cnt /= 2;
        }
        
        s = string(st.rbegin(), st.rend());
        time++;    
    }
    
    answer.emplace_back(time);
    answer.emplace_back(erase_zero);
    return answer;
}
*/