import sys
N,X = map(int, sys.stdin.readline().split())
BUS = tuple(tuple(map(int, sys.stdin.readline().split())) for _ in range(N))
depart = 0

for i in range(N):
    if sum(BUS[i]) <= X:
        depart = max(depart, BUS[i][0])

print(depart if depart != 0 else -1)