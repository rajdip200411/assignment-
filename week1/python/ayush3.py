arr = [1, 9, 3, 7]
first = second = float('-inf')
for num in arr:
    if num > first:
        second = first
        first = num
    elif num > second and num != first:
        second = num
print("Second Largest:", second)
