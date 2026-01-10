import sys
N = int(sys.stdin.readline())

print("@"*(N+2))
for _ in range(N):
    print(f"@{" "*N}@")
print("@"*(N+2))