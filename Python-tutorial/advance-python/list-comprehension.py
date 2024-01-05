l=[]
print("this is list comprehension  using for loop ")
for i in range(1,101):
    l.append(i)
print(l)

print(" now i am using list comprehension ")
ans=[i for i in range(1,101) if i%2==0]
print(ans)

print(" i am converting a string in list using comprehension ")
name='himanshu singh'
ansname=[ name[j] for j in range(len(name))]
sortans=[k for k in name]
print(sortans)
print(ansname)