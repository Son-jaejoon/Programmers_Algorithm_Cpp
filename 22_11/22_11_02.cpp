#include <string>

#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <stack>

using namespace std;

/* 81303번 표 편집
// 해설 : 스택, 시간효율 줄이는 게 어렵다..

#define INF 1e12

using namespace std;

using ld = long double;
using ll = long long;
using pldld = pair<ld, ld>;
using edge = pair<ld, pair<ll, ll>>;

ll offset;
vector<ll> tree;

void update(ll index, ll diff)
{
    index += offset;

    while (index > 0)
    {
        tree[index] += diff;
        index /= 2;
    }
}
ll query(ll from, ll to)
{
    ll res = 0;
    from += offset;
    to += offset;

    while (from <= to)
    {
        if (from % 2 == 1)
        {
            res += tree[from++];
        }
        if (to % 2 == 0)
        {
            res += tree[to--];
        }
        from /= 2;
        to /= 2;
    }
    return res;
}
ll findKth(ll kth)
{
    ll current = 1;
    while (current < offset)
    {
        if (tree[current << 1] >= kth)
        {
            current <<= 1;
        }
        else
        {
            kth -= tree[current << 1];
            current = (current << 1) + 1;
        }
    }
    return current - offset;
}
void print(ll n)
{
    for (ll i = 0; i < n; i++)
    {
        if (tree[i + offset])
        {
            cout << "O";
        }
        else
        {
            cout << "X";
        }
    }
    cout << '\n';
}
string solution(int n, int k, vector<string> cmd)
{
    string answer = "";
    for (offset = 1; offset < n; offset *= 2)
        ;

    tree.clear();
    tree.resize(offset * 2, 0);

    for (ll i = 0; i < n; i++)
    {
        update(i, 1);
    }

    stack<ll> s;
    ll current_live = n;
    for (auto e : cmd)
    {
        if (e[0] == 'U')
        {
            ll digit = 0;

            for (ll i = 2; i < e.size(); i++)
            {
                digit *= 10;
                digit += e[i] - '0';
            }
            ll current = query(0, k);
            ll next = findKth(current - digit);
            k = next;
            // cout << "UP" << ' ' << next << '\n';
        }
        else if (e[0] == 'D')
        {
            ll digit = 0;

            for (ll i = 2; i < e.size(); i++)
            {
                digit *= 10;
                digit += e[i] - '0';
            }

            ll current = query(0, k);
            ll next = findKth(current + digit);
            k = next;
            // cout << "DOWN" << ' ' << next << '\n';
        }
        else if (e[0] == 'C')
        {
            ll current = query(0, k);

            update(k, -1);

            s.push(k);
            if (current_live == current)
            {
                ll next = findKth(current - 1);
                k = next;
            }
            else
            {
                ll next = findKth(current);
                k = next;
            }
            current_live--;
            // cout << "DELETED" << ' ' << k << '\n';
        }
        else
        {
            auto top = s.top();
            s.pop();
            update(top, 1);
            current_live++;
            // print(n);
        }
    }

    for (ll i = 0; i < n; i++)
    {
        if (tree[i + offset])
        {
            answer += "O";
        }
        else
        {
            answer += "X";
        }
    }
    return answer;
}
* /