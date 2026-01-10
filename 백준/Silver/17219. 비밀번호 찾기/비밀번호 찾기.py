import sys
input = lambda: sys.stdin.readline().strip()
sys.setrecursionlimit(10000)

def bsearch(t, s, e):
    if (s > e): return None
    mid = (s + e) // 2
    
    if arr[mid][0] == t: return mid
    elif arr[mid][0] > t: return bsearch(t, s, mid-1)
    else: return bsearch(t, mid+1, e)

N, M = map(int, input().split())
arr = list(map(lambda x: input().split(), range(N)))
arr.sort()

for i in range(M):
    idx = bsearch(input(), 0, N-1)
    sys.stdout.write("%s\n" % arr[idx][1])
