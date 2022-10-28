#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <iostream>
#include <map>

using namespace std;

/* 67258번 보석 쇼핑 
// 1번 풀이
// 해설 : set으로 쥬얼리의 수를 센 후 투포인터로 정렬
// 정확성 33.3, 효율성 35.6 으로 효율을 낮추는 법을 고민함.
// url : https://school.programmers.co.kr/learn/courses/30/lessons/67258

vector<int> solution(vector<string> gems)
{
    vector<int> answer;
    set<string> jewelry_list;
    vector<int> visited;
    vector<string> save;

    for (int i = 0; i < gems.size(); i++)
    {
        jewelry_list.insert(gems[i]);
    }

    for (auto it = jewelry_list.begin(); it != jewelry_list.end(); it++)
    {
        save.emplace_back(*it);
    }

    visited.assign(save.size(), 0);

    if (visited.size() == 1)
    {
        answer.emplace_back(1);
        answer.emplace_back(1);
        return answer;
    }

    int save_lo = 0, save_hi = gems.size() - 1;

    int first_idx = 0;
    int end_idx = 1;

    while (first_idx < end_idx)
    {
        string gem_first = gems[first_idx];
        string gem_end = gems[end_idx];
        int save_first_idx = find(save.begin(), save.end(), gem_first) - save.begin();
        int save_end_idx = find(save.begin(), save.end(), gem_end) - save.begin();

        visited[save_first_idx]++;
        visited[save_end_idx]++;

        int idx = 0;

        if (find(visited.begin(), visited.end(), 0) != visited.end())
        {
            if (end_idx == gems.size() - 1)
            {
                break;
            }

            visited[save_first_idx]--;
            end_idx++;
        }
        else
        {
            if (save_hi - save_lo > end_idx - first_idx)
            {
                save_lo = first_idx;
                save_hi = end_idx;

                if (end_idx - first_idx == 2)
                    break;
            }

            visited[save_first_idx]--;
            visited[find(save.begin(), save.end(), gems[first_idx + 1]) - save.begin()]--;
            visited[save_end_idx]--;

            first_idx++;
        }
    }

    answer.emplace_back(save_lo + 1);
    answer.emplace_back(save_hi + 1);
    return answer;
}
*/

/* 2번풀이
// 문제 해결 : set -> vector로 숫자를 세는 것을 map을 통해 하나로 통합

vector<int> solution(vector<string> gems) {
	vector<int> answer;
	int gems_size = gems.size();
	int min_dist = 100001;

	map<string, int> list;
	set<string> s_temp;
    
	for (int i = 0; i < gems_size; ++i)
	{
		s_temp.insert(gems[i]);
	}
    
	int kind = s_temp.size();

	int start_idx = 0, end_idx = 0;


	while (1)
	{
		if (list.size() >= kind)
		{
			list[gems[start_idx]]--;

			if (list[gems[start_idx]] == 0)
			{
				list.erase(gems[start_idx]);
			}
			start_idx++;
		}
		else if (end_idx == gems_size)
		{
			break;
		}
		else
		{
			list[gems[end_idx]]++;
			end_idx++;
		}

		if (list.size() == kind)
		{
			int temp = end_idx - start_idx;
			if (temp < min_dist)
			{
				answer.clear();
				answer.push_back(start_idx + 1);
				answer.push_back(end_idx);
				min_dist = temp;
			}
		}
	}

	return answer;
}
*/