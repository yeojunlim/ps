import sys
N = int(sys.stdin.readline().strip())
key = sys.stdin.readline().strip()
idx_aster = key.find("*")
first = key[:idx_aster]
second = key[idx_aster+1:]

for i in range(N):
    filename = sys.stdin.readline().strip()
    
    if (len(filename) >= len(first) + len(second) and filename.startswith(first) and filename.endswith(second)):
        sys.stdout.write("DA\n")
    else:
        sys.stdout.write("NE\n")