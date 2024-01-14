import numpy as np
matrix=np.array([
     [5,6,45 ],
     [8,9,10],
     [15,20,40],
])
print(matrix)
print()
print(matrix[0][0])
print(len(matrix))
print(matrix[0][2])
print()
for i in matrix:
     print(i)
l=[]
l.append(matrix[0])
print(type(l))
print(type(matrix))
matrix_transpose=np.transpose(matrix)
print(matrix_transpose)
print()
print(matrix_transpose+matrix)

print(np.dot(matrix,matrix_transpose))
