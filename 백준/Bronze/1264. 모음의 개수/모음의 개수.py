import sys

while 1:
    ln = sys.stdin.readline().strip()
    if ln == '#': break;
    cnt = 0
    ln = ln.lower()
    for ch in ln:
        if ch in ('a', 'e', 'i', 'o', 'u'):
            cnt += 1
    sys.stdout.write("%d\n"%cnt)