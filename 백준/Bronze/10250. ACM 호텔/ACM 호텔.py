T = int(input())
for i in range(T):
    H, W, N = map(int, input().split())
    h = N % H
    if (h == 0): h = H
    w = str((N - 1) // H + 1)
    if int(w) < 10: w = f"0{w}"
    print("%d%s" % (h, w))
    