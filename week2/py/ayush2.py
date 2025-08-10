matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]
def rotate(matrix):
    rotated = [list(reversed(col)) for col in zip(*matrix)]
    return rotated
result = rotate(matrix)
for row in result:
    print(row)