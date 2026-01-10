T = int(input())
for i in range(T):
    sp = input().split()
    R = int(sp[0])
    S = sp[1]
    for j in S:
        print(j*R, end="")
    print()