#include <bits/stdc++.h>
using namespace std;

int N;
int s,e;
vector<pair<int,int>> lines;

int mx,cnt;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> s >> e;
        lines.push_back({s, 1});
        lines.push_back({e, -1});
    }
    sort(lines.begin(), lines.end());

    for (int i = 0; i < lines.size(); i++)
    {
        cnt += lines[i].second;
        if (mx < cnt) mx = cnt;
    }

    cout << mx << "\n";

    return 0;
}