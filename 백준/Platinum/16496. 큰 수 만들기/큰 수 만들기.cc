#include <bits/stdc++.h>
using namespace std;

int N;
string A[1001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    for (int i=0;i<N;i++) cin >> A[i];

    set<string> uniqueA(A,A+N);
    if (uniqueA.size()==1 && *uniqueA.begin() == "0")
    {
        cout << "0" << "\n";
        return 0;
    }

    sort(A,A+N,[](string& a, string& b){ return stoull(a+b)>stoull(b+a); });

    for (string i:A) cout << i;
    cout << "\n";

    return 0;
}