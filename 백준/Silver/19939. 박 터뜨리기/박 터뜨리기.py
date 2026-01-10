import sys
N,K = map(int, sys.stdin.readline().split())

# 총 필요한 공 수가 현재 있는 공 수보다 작을 때
# => 규칙에 맞게 나누어 담을 수 없을 때
ballCnt = (K * (K + 1)) // 2
if ballCnt > N: print(-1)
else:
    # i+1, i+2, i+3... 등 K개의 팀에 대해 공을 나누어주었을 때
    # 나누어준 공의 수가 등차수열로 나타내질 떄
    if (N-ballCnt)%K == 0: print(K-1)
    else: print(K)
