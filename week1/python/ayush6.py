arr = [3, 4, 5, 1, 2]
count = sum(arr[i] > arr[(i + 1) % len(arr)] for i in range(len(arr)))
print("Yes" if count <= 1 else "No")
