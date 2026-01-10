import sys

nums = [False for _ in range(1000001)]

N = int(sys.stdin.readline())
print(*sorted(map(lambda x: int(sys.stdin.readline()), range(N))), sep='\n')