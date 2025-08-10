matrix = [[1,0,0],[0,1,0],[0,0,1]]
n = len(matrix)
is_identity = all(matrix[i][j]==(1 if i==j else 0) for i in range(n) for j in range(n))
print("Identity Matrix" if is_identity else "Not Identity")
