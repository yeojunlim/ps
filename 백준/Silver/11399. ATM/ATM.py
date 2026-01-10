import sys
input = lambda: sys.stdin.readline().strip()

N = int(input())
sm = 0

for idx, Pi in enumerate(sorted(map(int, input().split()), reverse=True)):
    sm += Pi * (idx+1)

sys.stdout.write("%d\n" % sm)