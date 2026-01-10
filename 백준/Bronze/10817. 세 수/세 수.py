import sys
numbers = list(map(int, sys.stdin.readline().split()))
numbers.remove(max(numbers))
print(max(numbers))