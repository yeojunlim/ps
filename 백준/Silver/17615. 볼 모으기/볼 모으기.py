import sys

N = int(sys.stdin.readline())
balls = tuple(sys.stdin.readline().rstrip())
cnt = [0]*4
R = balls.count("R")
B = balls.count("B")

if balls[0] == "B":
    for i in balls:
        if i == "B":
            cnt[0] += 1
        else:
            break
else:
    for i in balls:
        if i == "R":
            cnt[2] += 1
        else:
            break

if balls[-1] == "B":
    for i in reversed(balls):
        if i == "B":
            cnt[1] += 1
        else:
            break
else:
    for i in reversed(balls):
        if i == "R":
            cnt[3] += 1
        else:
            break

res = 0
if B - max(cnt[0], cnt[1]) > R:
    res = R - max(cnt[2], cnt[3])
elif R - max(cnt[2], cnt[3]) > B:
    res = B - max(cnt[0], cnt[1])
else:
    res = min(B - max(cnt[0], cnt[1]), R - max(cnt[2], cnt[3]))

sys.stdout.write("%d\n" % res)
