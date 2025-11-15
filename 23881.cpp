#include <bits/stdc++.h>
using namespace std;

int N,K;
vector<int> A;
int a;

void selection_sort(vector<int>* v, int k)
{
    int mx, cnt = 0;
    for (int i = v->size()-1; 0 < i; i--)
    {
        mx = i;
        for (int j = 0; j <= i; j++) if ((*v)[mx] < (*v)[j]) mx = j;
        if (mx == i) continue;
        if (++cnt == k)
        {
            cout << (*v)[i] << ' ' << (*v)[mx] << '\n';
            exit(0);
        }
        swap((*v)[i], (*v)[mx]);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> K;
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        A.push_back(a);
    }

    selection_sort(&A, K);
    cout << -1 << '\n';

    return 0;
}