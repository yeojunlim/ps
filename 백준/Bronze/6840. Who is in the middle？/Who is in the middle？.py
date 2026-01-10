bowl=[]
for _ in range(3): bowl.append(int(input()))
bowl.remove(max(bowl))
bowl.remove(min(bowl))
print(bowl[0])