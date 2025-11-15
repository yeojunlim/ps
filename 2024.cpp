#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;

int M,L,R;
vector<pii> LINE;

int unable() { cout << 0 << "\n"; return 0; }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> M;
    while (1)
    {
        cin >> L >> R;
        if (L==0 && R==0) break;
        LINE.push_back({L,R});
    }
    sort(LINE.begin(), LINE.end());
    if (LINE.back().second < M) return unable();

    int covered = 0;
    int ans = 0;
    size_t i = 0;
    
    while (covered < M)
    {
        int max_right = covered;

        while (i < LINE.size() && LINE[i].first <= covered)
        {
            max_right = max(max_right, LINE[i].second);
            i++;
        }

        if (max_right <= covered) return unable();
        
        covered = max_right;
        ans++;
    }
    
    cout << ans << "\n";

    return 0;
}