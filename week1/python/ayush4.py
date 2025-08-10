arr = [0, 1, 0, 3, 12]
arr = [x for x in arr if x != 0] + [0] * arr.count(0)
print(arr)
