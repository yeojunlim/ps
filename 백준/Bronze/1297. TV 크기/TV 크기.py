import sys, math
D,H,W = map(int, sys.stdin.readline().split())

k = D / math.sqrt(W**2 + H**2)

width = k * W
height = k * H

print(int(height), int(width))
