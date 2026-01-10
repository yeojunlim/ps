import sys
num1 = int(sys.stdin.readline())
operator = sys.stdin.readline().rstrip()
num2 = int(sys.stdin.readline())
print(eval(f"{num1} {operator} {num2}"))