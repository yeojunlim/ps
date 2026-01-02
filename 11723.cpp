#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int M, num;
    unsigned long long int S = 0;
    string cmd;

    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> cmd;
        if (cmd == "all") S = ((1 << 21) - 1) & ~1;
        else if (cmd == "empty") S = 0;
        else
        {
            cin >> num;
            if (cmd == "add") S |= (1 << num);
            else if (cmd == "remove") S &= ~(1 << num);
            else if (cmd == "check") cout << ((S & (1 << num)) ? 1 : 0) << '\n';
            else if (cmd == "toggle") S ^= (1 << num);
        }
    }

    return 0;
}