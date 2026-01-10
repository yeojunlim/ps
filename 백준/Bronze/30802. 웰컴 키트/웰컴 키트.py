import sys, math
input = lambda: sys.stdin.readline().strip()

shirt_ans = 0
N = int(input())
Tshirt = list(map(int, input().split()))
T, P = map(int, input().split())

for i in Tshirt:
    shirt_ans += math.ceil(i / T)

sys.stdout.write("%d\n%d %d" % (shirt_ans, N // P, N % P))