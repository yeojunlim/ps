import sys
N, M = map(int, sys.stdin.readline().strip().split())
듣 = list(map(lambda x: sys.stdin.readline().strip(), range(N)))
보 = list(map(lambda x: sys.stdin.readline().strip(), range(M)))

듣보 = set(듣) & set(보)
print(len(듣보))
print(*sorted(듣보), sep="\n")