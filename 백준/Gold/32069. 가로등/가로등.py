import queue

L,N,K=map(int,input().split())
A=list(map(int,input().split()))

queue = queue.Queue()
savedCoord = set()
ans = list()

for i in range(N):
    queue.put([A[i], 0])
    savedCoord.add(A[i])

while not queue.empty():
    q = queue.get()
    ans.append(q[1])
    if len(ans)>=K: break
    if not q[0]+1 in savedCoord and 0<=q[0]+1<=L:
        savedCoord.add(q[0]+1)
        queue.put([q[0]+1, q[1]+1])
    if not q[0]-1 in savedCoord and 0<=q[0]-1<=L:
        savedCoord.add(q[0]-1)
        queue.put([q[0]-1, q[1]+1])

print(*ans, sep='\n')