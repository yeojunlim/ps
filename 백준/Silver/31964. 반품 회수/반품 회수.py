N=int(input())
X=list(map(int,input().split()))
T=list(map(int,input().split()))
C=X[-1]
time=C

for i in range(N-1,-1,-1):
    time+=max(C-X[i],T[i]-time)
    C=X[i]

time+=X[0]
print(time)