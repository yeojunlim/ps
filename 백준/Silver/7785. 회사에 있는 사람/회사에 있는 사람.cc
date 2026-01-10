#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    set<string> S;
    string name, status;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> name >> status;
        if (status == "enter") S.insert(name);
        else S.erase(name);
    }

    for (auto it = S.rbegin(); it != S.rend(); it++)
    {
        cout << *it << '\n';
    }

    return 0;
}