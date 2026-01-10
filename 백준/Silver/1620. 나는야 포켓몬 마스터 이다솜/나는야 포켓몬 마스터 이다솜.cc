#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int N, M;
    map<string, int> name2num;
    map<int, string> num2name;
    string s;

    cin >> N >> M;
    for (int i = 1; i < N+1; i++)
    {
        cin >> s;
        name2num[s] = i;
        num2name[i] = s;
    }

    for (int i = 0; i < M; i++)
    {
        cin >> s;
        if (std::isdigit(s[0])) cout << num2name[std::stoi(s)];
        else cout << name2num[s];
        cout << '\n';
    }

    return 0;
}