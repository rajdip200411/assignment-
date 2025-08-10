p1 = [3, 2, 5]  
p2 = [5, 1, 2]  
max_len = max(len(p1), len(p2))
res = [0]*max_len

for i in range(max_len):
    a = p1[i] if i < len(p1) else 0
    b = p2[i] if i < len(p2) else 0
    res[i] = a + b

print("Sum Polynomial:", res)
