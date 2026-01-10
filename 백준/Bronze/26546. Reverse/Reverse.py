import sys
for i in range(int(sys.stdin.readline())):
    string, fidx, sidx = sys.stdin.readline().split()
    sys.stdout.write("%s%s\n" % (string[:int(fidx)], string[int(sidx):]))