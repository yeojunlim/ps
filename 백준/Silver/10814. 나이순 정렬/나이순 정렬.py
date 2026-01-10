import sys
input = lambda: sys.stdin.readline().strip()

N = int(input())
member = list(map(lambda x: tuple(input().split()), range(N)))
member.sort(key = lambda x: int(x[0]))

for i in range(N):
    sys.stdout.write("%s %s\n" % (member[i][0], member[i][1]))