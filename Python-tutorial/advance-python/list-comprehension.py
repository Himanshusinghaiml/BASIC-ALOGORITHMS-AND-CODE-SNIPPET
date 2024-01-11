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

my_dict = {'b': 2, 'a': 1, 'c': 3}

# Iterate over keys (in insertion order)
for key in my_dict:
    print(key, my_dict[key])
print()
print()
from collections import Counter    
g="zxvczbtxyzvy"
p=dict(Counter(g))
for k in p:
    print(k,p[k])
for key in p:
    if p[key]==1:
        print(key)
