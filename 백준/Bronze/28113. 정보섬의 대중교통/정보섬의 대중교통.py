import sys
N,A,B = map(int, sys.stdin.readline().split())
subway = max(N,B)

if A == subway: print("Anything")
elif A < subway: print("Bus")
else: print("Subway")
