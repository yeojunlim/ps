from sys import stdin, stdout

def hanoi(n, s, m, e):
    if n == 0: return
    hanoi(n-1, s, e, m)
    stdout.write("%d %d\n" % (s, e))
    hanoi(n-1, m, s, e)

N = int(stdin.readline().strip())
stdout.write("%d\n" % (2 ** N - 1))
if N <= 20: hanoi(N, 1, 2, 3)