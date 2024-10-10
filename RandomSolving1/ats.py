X = [[12,7,3],
    [4 ,5,6],
    [7 ,8,9]]
Y = [[5,8,1],
    [6,7,3],
    [4,5,9]]
result = [[0,0,0],
         [0,0,0],
         [0,0,0]]
Tresult = [[0,0,0],
         [0,0,0],
         [0,0,0]]


for i in range(len(X)):
   for j in range(len(Y[0])):
       for k in range(len(Y)):
           result[i][j] += X[i][k] * Y[k][j]
print("multiplicaion is ")
for r in result:
   print(r)

for i in range(len(result)):
   for j in range(len(result[0])):
       Tresult[j][i] = result[i][j]
print("Transpose is ")
for r in Tresult:
   print(r)