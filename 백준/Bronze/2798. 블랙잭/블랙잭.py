N, M = map(int, input().split())
card = list(map(int, input().split()))
ans = 0
for i in range(N):
    for j in range(i + 1, N):
        for k in range(j + 1, N):
            if (card[i] + card[j] + card[k] <= M and abs(M - ans) > abs(M - (card[i] + card[j] + card[k]))):
                ans = card[i] + card[j] + card[k]
print(ans)