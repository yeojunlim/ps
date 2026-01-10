while True:
    arr = list(map(int, input().split()))
    if arr == [0,0,0]: break
    mx = max(arr)
    arr.remove(mx)
    if arr[0] ** 2 + arr[1] ** 2 == mx ** 2: print("right")
    else: print("wrong")