#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<pair<ll,ll>,ll> p_pll_ll;

ll N;
ll xbl,ybl,xtr,ytr;
vector<p_pll_ll> slope;

ll cnt,mx;

bool compare(p_pll_ll a, p_pll_ll b)
{
    if (b.first.first * a.first.second != a.first.first * b.first.second) return b.first.first * a.first.second < a.first.first * b.first.second;
    return a.second > b.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    for (size_t i=0;i<N;i++)
    {
        cin >> xbl >> ybl >> xtr >> ytr;
        if (ybl*xtr<ytr*xbl)
        {
            slope.push_back({{xbl,ybl},1});
            slope.push_back({{xtr,ytr},-1});
        }
        else
        {
            slope.push_back({{xbl,ybl},-1});
            slope.push_back({{xtr,ytr},1});
        }
    }
    sort(slope.begin(),slope.end(),compare);

    for (size_t i=0;i<slope.size();i++)
    {
        cnt += slope[i].second;
        if (mx<cnt) mx=cnt;
    }

    cout << mx << "\n";

    return 0;
}