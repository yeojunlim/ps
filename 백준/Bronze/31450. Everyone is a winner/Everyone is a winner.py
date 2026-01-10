import sys

M,K = map(int, sys.stdin.readline().split())
print("Yes" if M%K==0 else "No")