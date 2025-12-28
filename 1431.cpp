#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b)
{
    if (a.size() != b.size()) return a.size() < b.size();
    pair<int,int> sum;
    for (int i = 0; i < a.size(); i++)
    {
        if (isdigit(a[i])) sum.first += (a[i] - '0');
        if (isdigit(b[i])) sum.second += (b[i] - '0');
    }
    if (sum.first != sum.second) return sum.first < sum.second;
    return a < b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    vector<string> serial;
    
    cin >> N;
    serial.resize(N);
    for (int i = 0; i < N; i++) cin >> serial[i];

    sort(serial.begin(), serial.end(), cmp);
    for (string s : serial) cout << s << '\n';

    return 0;
}