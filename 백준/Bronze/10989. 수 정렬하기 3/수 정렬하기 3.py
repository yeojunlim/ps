import sys
N = int(sys.stdin.readline().strip())
arr = [0] * 10001
for i in range(N):
    arr[int(sys.stdin.readline().strip())] += 1
for i in range(1, 10001):
    for j in range(arr[i]):
        sys.stdout.write("%d\n" % i)