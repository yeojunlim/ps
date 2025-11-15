#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;

int n;
int x,y;
pii first, before;
vector<pii> xl, yl;

int hc,vc;
int hm,vm;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (i==0)
        {
            first = {x, y};
            before = {x, y};
            continue;
        }

        if (before.first == x)
        {
            yl.push_back({min(before.second, y), 1});
            yl.push_back({max(before.second, y), -1});
        }
        else
        {
            xl.push_back({min(before.first, x), 1});
            xl.push_back({max(before.first, x), -1});
        }

        before = {x, y};

        if (i == n-1)
        {
            if (first.first == before.first)
            {
                yl.push_back({min(before.second, first.second), 1});
                yl.push_back({max(before.second, first.second), -1});
            }
            else
            {
                xl.push_back({min(before.first, first.first), 1});
                xl.push_back({max(before.first, first.first), -1});
            }
        }
    }
    sort(xl.begin(), xl.end());
    sort(yl.begin(), yl.end());

    for (int i = 0; i < xl.size(); i++)
    {
        vc += xl[i].second;
        if (vm < vc) vm = vc;
    }
    for (int i = 0; i < yl.size(); i++)
    {
        hc += yl[i].second;
        if (hm < hc) hm = hc;
    }

    cout << max(hm, vm) << "\n";

    return 0;
}