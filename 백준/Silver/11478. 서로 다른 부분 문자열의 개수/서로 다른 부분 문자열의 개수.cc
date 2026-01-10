#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    string S;
    set<string> part;
    cin >> S;

    for (int i = 0; i < S.size(); i++)
    {
        for (int j = i; j < S.size(); j++)
        {
            part.insert(S.substr(i, j-i+1));
        }
    }

    cout << part.size();

    return 0;
}