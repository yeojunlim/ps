L = int(input())
S = input()
H = sum(map(lambda x, y: (ord(x) - 96) * 31 ** y, S, range(L))) % 1234567891
print(H)