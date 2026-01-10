import sys
input = lambda: sys.stdin.readline().strip()

ISBN = input()
check = int(ISBN[-1])

mul = 1 if ISBN.index('*') % 2 == 0 else 3
_sum = sum(map(lambda x, y: (0 if x == -1 else (x * 3 if y % 2 != 0 else x)), map(lambda x: (int(x) if x != '*' else -1), ISBN[:-1]), range(len(ISBN)-1)))

for i in range(0, 10):
    _sum_d = (_sum + i * mul) % 10
    if (_sum_d == 0 and check == 0) or 10 - _sum_d == check:
        sys.stdout.write("%d\n" % i)
        break
        
