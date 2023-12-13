'''  
# reverse a number
def number(num):
    ans=0
    while(num!=0):
        rem=num%10
        ans=ans*10+rem
        num=num//10  # it gives integer value (floor division ) but if we use  / division operator in python then return float value in python 
    return ans
        
    
num=23185
print(number(num)) 

for i in range(1,11):
    print(i*2,end=" ")
#, you should use a trailing comma, like a = (2,).
# for define one tuple element
pq=(2,) # tuple 
#pq=(2) #int
# print(pq,type(pq))
p=[2,]
print(p,type(p)) # it is same things in list only changing in tuple if i defned only one element ,use tailing comma
 '''
 
for i in range(1,11,1):
    print(i)
print() 
for i in range(10,0,-1):
    print(i)