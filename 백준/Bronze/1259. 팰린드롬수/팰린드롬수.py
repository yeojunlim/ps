while True:
    S = input()
    if S == "0": break
    for i in range(len(S)//2+1):
        if S[i] != S[-1 * i - 1]:
            print("no")
            break
        elif i == len(S)//2:
            print("yes")