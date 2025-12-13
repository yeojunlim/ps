#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii; // {x, y}

int N;
vector<vector<int>> paper;
int p;

pii rst; // {white, blue}

void cut(pii p1, pii p2) // 좌상단, 우하단
{
    int colored = -1;
    if (p1 == p2)
    {
        if (paper[p1.second][p1.first] == 0) rst.first++;
        else rst.second++;
        return;
    }
    for (int y = p1.second; y <= p2.second; y++)
    {
        for (int x = p1.first; x <= p2.first; x++)
        {
            if (colored == -1)
            {
                colored = paper[y][x];
                continue;
            }
            if (paper[y][x] != colored)
            {
                int hx = p1.first + (p2.first - p1.first) / 2;
                int hy = p1.second + (p2.second - p1.second) / 2;

                cut(p1, {hx, hy});
                cut({hx + 1, p1.second}, {p2.first, hy});
                cut({p1.first, hy + 1}, {hx, p2.second});
                cut({hx + 1, hy + 1}, p2);

                return;
            }
        }
    }
    if (colored == 0) rst.first++;
    else rst.second++;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    paper.resize(N);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> p;
            paper[i].push_back(p);
        }
    }

    cut({0, 0}, {N - 1, N - 1});
    cout << rst.first << '\n' << rst.second << '\n';

    return 0;
}