import sys

N = int(sys.stdin.readline())
score = tuple(map(int, sys.stdin.readline().split()))

print(max(score) - min(score))