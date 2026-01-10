import sys
text = sys.stdin.readline()
result = ""

for i in range(len(text)):
    if text[i].islower(): 
        result += text[i].upper()
        continue
    result += text[i].lower()

print(result)
        