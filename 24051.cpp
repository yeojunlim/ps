#include <bits/stdc++.h>
using namespace std;

int N,K;
vector<int> A;
int a;

void insertion_sort(vector<int>* v, int k)
{
    int loc, newItem;
    for (int i = 1; i < v->size(); i++)
    {
        loc = i-1;
        newItem = (*v)[i];

        while (0 <= loc && newItem < A[loc])
        {
            (*v)[loc + 1] = (*v)[loc];
            if (--k == 0)
            {
                cout << (*v)[loc] << '\n';
                exit(0);
            }
            loc--;
        }
        if (loc + 1 != i)
        {
            (*v)[loc + 1] = newItem;
            if (--k == 0)
            {
                cout << (*v)[loc] << '\n';
                exit(0);
            }
        }
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

    insertion_sort(&A, K);
    cout << -1 << '\n';

    return 0;
}