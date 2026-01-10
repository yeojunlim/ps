N = int(input())
for i in range(N):
    ans = 0
    con = 0
    OX = input()
    for j in OX:
        if j == "O":
            con += 1
            ans += con
        else:
            con = 0
    print(ans)