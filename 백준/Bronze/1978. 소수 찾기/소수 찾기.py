from math import sqrt
input()

def sol(n):
    for i in range(2, int(sqrt(n)) + 1):
        if n % i == 0: return False
    return True

ans = 0
for num in map(int, input().split()):
    if num == 0 or num == 1: continue
    if sol(num): ans += 1
print(ans)