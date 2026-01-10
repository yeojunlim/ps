import sys
input = lambda: sys.stdin.readline().strip()

N = int(input())
arr = [input() for _ in range(N)]

arr.sort(key = lambda x: (len(x), x))
for i in tuple(set(arr)):
    sys.stdout.write("%s\n" % i)