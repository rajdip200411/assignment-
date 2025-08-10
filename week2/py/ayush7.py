p1 = [3, 2]  
p2 = [1, 4] 

res = [0]*(len(p1)+len(p2)-1)

for i in range(len(p1)):
    for j in range(len(p2)):
        res[i+j] += p1[i]*p2[j]

print("Product Polynomial:", res)
