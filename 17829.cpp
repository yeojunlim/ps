#include <bits/stdc++.h>
using namespace std;

int N;
vector<vector<int>> A;
int a;

void pulling(vector<vector<int>>& v)
{
    if (v.size() == 1)
    {
        cout << v[0][0] << '\n';
        exit(0);
    }

    int hs = v.size() / 2;
    vector<vector<int>> tmp(hs);
    for (int y = 0; y < hs; y++)
    {
        for (int x = 0; x < hs; x++)
        {
            vector<int> this_cube = {v[y * 2][x * 2], v[y * 2][x * 2 + 1], v[y * 2 + 1][x * 2], v[y * 2 + 1][x * 2 + 1]};
            nth_element(this_cube.begin(), this_cube.begin() + 2, this_cube.end());
            tmp[y].push_back(this_cube[2]);
        }
    }

    pulling(tmp);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    A.resize(N);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> a;
            A[i].push_back(a);
        }
    }

    pulling(A);

    return 0;
}