x=0
T=int(input())
for i in range(T):
    L,R,S = map(int,input().split())
    x=0
    left=abs(S-L)
    right=abs(S-R)
    if left < right:
        x=left*2+1
    else: 
        x=right*2
    print(x)