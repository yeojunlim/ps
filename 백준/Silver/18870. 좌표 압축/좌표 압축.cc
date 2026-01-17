#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int N;
    vector<int> v1, v2;
    int e;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> e;
        v1.push_back(e);
        v2.push_back(e);
    }
    
    sort(v1.begin(), v1.end());
    v1.erase(unique(v1.begin(), v1.end()), v1.end());

    for (int i : v2)
    {
        auto it = lower_bound(v1.begin(), v1.end(), i);
        cout << distance(v1.begin(), it) << ' ';
    }

    return 0;
}