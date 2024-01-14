import numpy as np
matrix=np.array([
    [5,7,8],[4,5,6],[1,4,96]
])
print(matrix,"\n")
# print()
matrix2=np.transpose(matrix)
print(matrix2,"\n")
matrix3=matrix2+matrix
print(matrix3)
print("sum of two matrix :\n\n",np.dot(matrix2,matrix3))
print(" we r priting through lopping manually \n")
for i in range(len(matrix)):
    for j in range(len(matrix)):
        print(matrix[i][j],end=" ")
    print()
print(" now printing traonspose matric manually in python ")
mat=np.array([
    [5,4,7],[7,8,9],[25,7,4]
])

print(mat,"\n")
for i in range(len(mat)):
    for j in range(i+1,len(mat)):
        mat[i][j],mat[j][i]=mat[j][i],mat[i][j]
print(mat,"\n")
        
