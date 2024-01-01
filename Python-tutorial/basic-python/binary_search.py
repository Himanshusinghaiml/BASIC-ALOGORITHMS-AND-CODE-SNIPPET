def binary(list,key):
    n=len(list)
    start=0
    last=n-1
    while(start<=last):
        mid=start+(last-start)//2
        if(list[mid]==key):
            return mid
        elif (list[mid]<key):
            start=mid+1
        else:
            last=mid-1
    return  -1
def linear(list,key):
    for i in range(len(list)):
        if (list[i]==key):
            return i
    return None


def reverse(num):
    ans=0
    store=[]
    while(num!=0):
        rem=num%10
        ans=ans*10+rem
        num=num//10
    return ans

def listrev(list):
    start=0
    last=len(list)-1
    while(start<last):
        list[start],list[last]=list[last],list[start]
        start=start+1
        last=last-1
list=[50,55,60,65,70]   
num=56789
'''   
try:
   value=int(input("enter the number "))
except:
    print("enter the correct value ")
    exit()
ans=binary(list,value)
if ans != -1:
    print(" using binary serach answer found at index :",ans)
else:
    print("answer not found ")
    
anslinear=linear(list,value)
if anslinear is not None:
    print(" using linear search lement found at index : ",anslinear," -> ",list[anslinear])
else:
    print("element not found  :")  

ans=reverse(num)
print(ans)  
   # alternatively we can use inbuilt function 
   
listrev(list)
print(list)
 '''


