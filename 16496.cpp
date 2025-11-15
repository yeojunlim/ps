#include <iostream>
#include <algorithm>
#include <string>
#include <set>
#define MAX 1001
using namespace std;

int N;
string A[MAX];

bool comp(string a, string b)
{
    return stoull(a+b)>stoull(b+a);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    for (int i=0;i<N;i++) cin >> A[i];

    set<string> uniqueA(A,A+N);
    if (uniqueA.size()==1 && *uniqueA.begin() == "0")
    {
        cout << "0" << "\n";
        return 0;
    }

    sort(A,A+N,comp);

    for (string i:A) cout << i;
    cout << "\n";

    return 0;
}