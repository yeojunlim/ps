import sys

n = int(sys.stdin.readline())
numbers = tuple(int(sys.stdin.readline()) for _ in range(n))
for i in numbers:
    print("="*i)