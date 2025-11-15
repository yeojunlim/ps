#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int N;
vi A,B;
int e;

int selection_sort(vi* a, vi* b)
{
    int mx, cnt = 0;
    for (int i = a->size()-1; 0 < i; i--)
    {
        mx = i;
        for (int j = 0; j <= i; j++) if ((*a)[mx] < (*a)[j]) mx = j;
        if (mx == i) continue;
        if (*a == *b) return 1;
        swap((*a)[i], (*a)[mx]);
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> e;
        A.push_back(e);
    }
    for (int i = 0; i < N; i++)
    {
        cin >> e;
        B.push_back(e);
    }

    cout << selection_sort(&A, &B) << '\n';

    return 0;
}