import sys
input = sys.stdin.readline

h = [int(input()) for _ in range(int(input()))]
h=tuple(reversed(h))

ans, maxH = 0, 0

for height in h:
    if height > maxH:
        ans+=1
        maxH = height

print(ans)