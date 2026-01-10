import sys
input = lambda: sys.stdin.readline().strip()

N = int(input())
member = list(map(lambda x: tuple(map(int, input().split())), range(N)))
member.sort()

for i in range(N):
    sys.stdout.write("%d %d\n" % (member[i][0], member[i][1]))