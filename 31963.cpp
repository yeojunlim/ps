#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int N;
vector<ll> A, rst;
int a;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N;
    
    for (int i = 0; i < N; i++) A.push_back((cin >> a, a));
    rst.push_back(0);

    for (int i = 1; i < N; i++) rst.push_back(max(0LL, (ll)ceil(log2((double)A[i-1] / A[i])) + rst[i-1]));
    cout << accumulate(rst.begin(), rst.end(), 0LL) << '\n';
    
    return 0;
}