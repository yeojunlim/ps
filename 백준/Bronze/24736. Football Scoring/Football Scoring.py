import sys
one = tuple(map(int, sys.stdin.readline().split()))
home = tuple(map(int, sys.stdin.readline().split()))

print(one[0]*6+one[1]*3+one[2]*2+one[3]*1+one[4]*2, end=' ')
print(home[0]*6+home[1]*3+home[2]*2+home[3]*1+home[4]*2)