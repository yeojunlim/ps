import sys
N,K,P = map(int, sys.stdin.readline().split())
cream = tuple(map(int, sys.stdin.readline().split()))
canSell = 0

for i in range(0, N, 1):
    one = cream[i*K:(i+1)*K]
    if one.count(0) < P: canSell += 1

print(canSell)