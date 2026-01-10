from math import gcd
nums = list(map(int, input().split()))
_GCD = gcd(nums[0], nums[1])
print(_GCD, nums[0] * nums[1] // _GCD, sep="\n")