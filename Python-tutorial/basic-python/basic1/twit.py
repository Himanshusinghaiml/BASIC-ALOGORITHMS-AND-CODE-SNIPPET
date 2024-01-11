name="himanshu"
name=name[::2]
print(name)

d={}
d[(2,4,8)]=10
print(d)
a={}
a['p','o']=10
a['c']=20
print(a)
sum=0
for k in a:
    sum+=a[k]
    
print("print of sum :",sum)
f={}
f[1,4,5]=10
f[5,4,1]=12
f[7,8]=8
sum1=0
for i in f:
    sum1+=f[i]
print(len(f)+sum1)
m=[]
m+="python"
print(m)