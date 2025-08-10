matrix = [[1,2,3],[4,5,6],[7,8,9]]
n = len(matrix)
main_diag = sum(matrix[i][i] for i in range(n))
anti_diag = sum(matrix[i][n-i-1] for i in range(n))
print("Main Diagonal Sum:", main_diag)
print("Anti Diagonal Sum:", anti_diag)
