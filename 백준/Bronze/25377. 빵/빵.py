import sys

N = int(sys.stdin.readline())
store = [tuple(map(int, sys.stdin.readline().split())) for _ in range(N)]

time = []
for i in range(N):
    if store[i][0] > store[i][1]: continue
    time.append(max(store[i][0],store[i][1]))

if time:
    print(min(time))
else:
    print(-1)