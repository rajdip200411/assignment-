matrix = [[0,0,3],[0,0,0],[7,0,0]]
rows, cols = len(matrix), len(matrix[0])
zeros = sum(row.count(0) for row in matrix)

if zeros > (rows*cols)/2:
    print("Sparse Matrix")
else:
    print("Not Sparse Matrix")
