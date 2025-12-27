#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    int card;
    priority_queue<int, vector<int>, greater<int>> q;
    int ans = 0;
    int tmp;

    cin >> N;
    for (int i = 0; i < N; i++) q.push((cin >> card, card));
    
    while (q.size()>1)
    {
        if (q.size() == 1)
        {
            ans += q.top();
            break;
        }
        int tmp = 0;
        tmp += q.top();
        q.pop();
        tmp += q.top();
        q.pop();
        ans += tmp;
        q.push(tmp);
    }

    cout << ans;

    return 0;
}