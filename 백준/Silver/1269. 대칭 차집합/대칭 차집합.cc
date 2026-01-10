#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int N, M;
    set<int> A, B;
    int e;

    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> e;
        A.insert(e);
    }
    for (int i = 0; i < M; i++)
    {
        cin >> e;
        B.insert(e);
    }

    vector<int> buf;
    std::set_symmetric_difference(
        A.begin(), A.end(),
        B.begin(), B.end(),
        std::inserter(buf, buf.begin())
    );

    cout << buf.size();

    return 0;
}