import sys

N, K = map(int, sys.stdin.readline().split())

DP = [[-1 for _ in range(K+1)] for _ in range(N+1)]
def nCk(n, k):
    if k == 0 or k == n: return 1
    if DP[n][k] == -1: DP[n][k] = nCk(n-1, k-1) + nCk(n-1, k)
    return DP[n][k]

sys.stdout.write("%d\n" % nCk(N, K))