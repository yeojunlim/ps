#include <bits/stdc++.h>
using namespace std;

int N;
vector<pair<int,bool>> line;
int x,y;
int cnt;
int length;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    for (int i=0;i<N;i++)
    {
        cin >> x >> y;
        line.push_back(make_pair(x,true));
        line.push_back(make_pair(y,false));
    }
    sort(line.begin(),line.end());

    for (size_t i=0;i<line.size()-1;i++)
    {
        if (line[i].second) cnt++;
        else cnt--;

        if (0<cnt) length+=line[i+1].first-line[i].first;
    }

    cout << length << "\n";

    return 0;
}