#include <bits/stdc++.h>
using namespace std;

int n,d;
int h,o;
vector<pair<int, int>> pos;
vector<int> starts;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> h >> o;
        if (o < h) swap(h, o);
        pos.push_back({h, o});
    }
    cin >> d;
    
    sort(pos.begin(), pos.end(),
    [](auto& a, auto& b) { return a.second < b.second; });
    
    int max_count = 0;
    
    for (auto& p : pos)
    {
        int h = p.first;
        int o = p.second;

        if (o - h > d) continue;
        
        starts.insert(lower_bound(starts.begin(), starts.end(), h), h);
    
        auto it = lower_bound(starts.begin(), starts.end(), o - d);
        starts.erase(starts.begin(), it);
        
        max_count = max(max_count, (int)starts.size());
    }
    
    cout << max_count << '\n';
    
    return 0;
}