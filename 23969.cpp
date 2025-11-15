#include <bits/stdc++.h>
using namespace std;

int N,K;
vector<int> A;
int a;

void bubble_sort(vector<int>* v, int k)
{
    for (int i = v->size()-1; 0 < i; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if ((*v)[j] > (*v)[j+1])
            {
                swap((*v)[j], (*v)[j+1]);
                if (--k == 0)
                {
                    for (auto i : *v) cout << i << ' ';
                    cout << '\n';
                    exit(0);
                }
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
    
    bubble_sort(&A, K);
    cout << -1 << '\n';

    return 0;
}