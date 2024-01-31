# program for prime number
import math
def prime():
    check=False
    num=int(input("enter the number "))
    if num==1 or num<1:
        print(num,"not a prime number ")
    else:
        for i in range(2,int(math.sqrt(num)+2)):
            if num%i==0:
                check=True
                break
        if check==True:
            print(num, " is not prime number ")
        else:
            print(num,"prime number ")

def prime_recursion(num,i=2):
    if num<2:
        return False
    if num%i==0:
        return False
    return prime_recursion(num,i+1)
  
num=int(input("enter the number "))
ans=prime_recursion(num,)
if ans==True:
    print(" yes prime number")
else:
    print("not prime number")


'''
 python is most powerful programming language , it is widely used in dara science field
 and also in web development field , django framework for backend. 

'''
