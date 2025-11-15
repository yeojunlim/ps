#include <bits/stdc++.h>
using namespace std;

int N;
string t1,t2;
vector<pair<string,int>> schedule;

int cnt,mx;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> t1 >> t2;
        t1.replace(2,1,"");
        t1.replace(4,1,"");
        t1.replace(6,1,"");
        t2.replace(2,1,"");
        t2.replace(4,1,"");
        t2.replace(6,1,"");
        schedule.push_back({t1, 1});
        schedule.push_back({t2, -1});
    }
    sort(schedule.begin(), schedule.end());

    for (int i = 0; i < schedule.size(); i++)
    {
        cnt += schedule[i].second;
        if (mx < cnt) mx = cnt;
    }

    cout << mx << "\n";

    return 0;
}