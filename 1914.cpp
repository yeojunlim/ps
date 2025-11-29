// * f(n): n개의 원판을 가진 하노이 탑 문제를 풀 때 움직이는 횟수
// f(n) = 1 << N - 1

#include <bits/stdc++.h>
using namespace std;

int N;

void hanoi(int n, int s, int m, int e)
{
    if (n == 0) return;
    hanoi(n-1, s, e, m);
    cout << s << ' ' << e << '\n';
    hanoi(n-1, m, s, e);
}

void print_i128(const unsigned __int128 num)
{
    if (num > 9) print_i128(num / 10);
    putchar(num % 10 + '0');
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    auto K = ((unsigned __int128)1 << N) - 1;

    print_i128(K);
    putchar('\n');
    fflush(stdout);
    if (N <= 20) hanoi(N, 1, 2, 3);

    return 0;
}