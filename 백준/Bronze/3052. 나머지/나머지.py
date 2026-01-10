arr = []
for i in range(10): arr.append(int(input()))
arr = set(map(lambda x: x % 42, arr))
print(len(arr))