N = int(input())
scores = list(map(int, input().split()))

print(sum(map(lambda x: x/max(scores)*100, scores))/N)