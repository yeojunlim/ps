import sys, math

round = lambda x: math.floor(x + 0.5)

solved = list(map(lambda x: int(sys.stdin.readline().strip()), range(int(sys.stdin.readline().strip()))))
d = round(len(solved) * 0.15)
if d > 0: solved = sorted(solved)[d:-d]
if len(solved) == 0:
    sys.stdout.write("0\n")
    exit(0)
sys.stdout.write("%d\n" % round(sum(solved)/len(solved)))