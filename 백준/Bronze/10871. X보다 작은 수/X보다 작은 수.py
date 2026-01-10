import sys
N, X = map(int, sys.stdin.readline().split())
A = tuple(map(int, sys.stdin.readline().split()))
for i in range(N):
    if A[i] < X: print(A[i])