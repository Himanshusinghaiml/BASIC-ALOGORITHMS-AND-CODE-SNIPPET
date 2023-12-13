#basic program like addition subtration multiplication division
# def calculate(a,b):
#     sum=a+b
#     mult=a*b
#     sub=a-b
#     div=a//b
#     return sum,mult,div,sub,a,b
# sum,mult,div,sub,a,b=calculate(10,5)
# print("the value of a is :",a,"and b is :",b)
# # print()
# print("the sum of :",sum)
# print("the sub of :",sub)
# print("the mult of :",mult)
# print("the div of :",div)

# using class implementation in python

'''    
class calculateclass:
    def __init__(s,num1,num2) -> None:
        s.a=num1
        s.b=num2
    def calculatefunction(self):
       sum=self.a+self.b
       mult=self.a*self.b
       sub=self.a-self.b
       div=self.a//self.b
       return sum,mult,div,sub,self.a,self.b  # we can return multiple value in the function 
# sum,mult,div,sub,a,b=calculate(10,5)
obj1=calculateclass(10,5)
sum,mult,div,sub,a,b= obj1.calculatefunction()
print("the value of a is :",a,"and b is :",b)
print()
print("the sum of :",sum)
print("the sub of :",sub)
print("the mult of :",mult)
print("the div of :",div)


'''

#we return the list in function 
# user-defined function in python 

'''  
def sum_ele(arr):
    store=0
    for i in range(len(arr)):
       store+=arr[i] 
    return store,len(arr)
list=[5,10,15,20,25,30]
print((sum_ele(list)))
    '''
    
# return a list in function 
'''  
def listreturn(arr):
    arr.append(20)
    return arr,5
list=[5,10,15]
output=listreturn(list)
print(output)
   '''

# input from the user and store in the list 
# implementing the exceptioon handling case if user input wrong key 
 
list=[]

try:
    var=int(input("enter the size of the element :"))
except ValueError:
    print("kindly provide valid integer : ")
    exit()
    
for i in range(var):
    while True:
        try:
            num=int(input(f"enter element {i+1} : ")) # we use curly bracket {} to print the integer value in the string 
            break
        except  :
            print("enter a valid number ")
    list.append(num)
print("this is your list : ",list)

    
    