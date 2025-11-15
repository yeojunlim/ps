#include <bits/stdc++.h>
using namespace std;

int N;
vector<pair<int,int>> T;
int Te,Tx;

pair<int,int> Tm;
int cnt,mx;
bool isMax;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    for (int i=0;i<N;i++)
    {
        cin >> Te >> Tx;
        T.push_back({Te,1});
        T.push_back({Tx,-1});
    }
    sort(T.begin(),T.end());
    
    N<<=1;
    for (int i=0;i<N;i++)
    {
        while (1)
        {
            cnt += T[i].second;
            if (i+1<N && T[i].first==T[i+1].first) i++;
            else break;
        }
        if (isMax) Tm.second = T[i].first;
        if (cnt>mx)
        {
            isMax=true;
            mx=cnt;
            Tm.first=T[i].first;
        }
        else if (cnt<mx) isMax=false;
    }

    cout << mx << "\n" << Tm.first << ' ' << Tm.second << "\n";

    return 0;
}