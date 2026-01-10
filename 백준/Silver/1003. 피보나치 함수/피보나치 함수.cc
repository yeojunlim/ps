#include <bits/stdc++.h>
using namespace std;

int T, N;
int a, b;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N;
        a = 1;
        b = 0;
        for (int j = 0; j < N; j++)
        {
            b = a + b;
            a = b - a;
        }
        cout << a << ' ' << b << '\n';
    }
    
    return 0;
}