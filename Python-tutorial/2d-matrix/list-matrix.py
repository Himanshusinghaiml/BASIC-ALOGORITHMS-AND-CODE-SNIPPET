l=[
    [5,7,8],[7,8,9],[1,2,3]
]
for i in l:
    print(i)
print(type(l))
l1=[
    [1,2,3],
    [7,4,5],
    [4,5,6]
]
print(l+l1)
# result=[3*[0]]*3
result=[[74,45,1],[7,8,9],[4,5,6]]
print(result,"\n")

for i in range(len(l)):
    for j in range(len(l[0])):
        result[i][j]=l[i][j]+l1[i][j]
print(result)
 
 