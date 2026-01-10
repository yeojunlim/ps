import sys

N = int(sys.stdin.readline())
p = list(tuple(map(int, sys.stdin.readline().split())) for _ in range(N))
p.sort(key=lambda x: x[0])
arrow = 0

for i in range(N):
    nearest = p[-1][0]-p[0][0]+1
    for j in range(i+1, N, 1):
        if p[j][1] == p[i][1]:
            nearest = min(nearest, abs(p[i][0]-p[j][0]))
            break
    for j in range(i-1, -1, -1):
        if p[j][1] == p[i][1]:
            nearest = min(nearest, abs(p[i][0]-p[j][0]))
            break
    if nearest == p[-1][0]-p[0][0]+1:
        while True: pass
    arrow += nearest

print(arrow)