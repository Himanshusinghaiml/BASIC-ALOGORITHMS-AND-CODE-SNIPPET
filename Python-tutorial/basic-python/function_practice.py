def sum():
    return 10
print(5+sum())

t="tesTUYIY"
s="     himanshu singh      "
x=t.lower()
space=s.strip()
print(t.upper(),x)
print(space,len(space))

l=[5,7,8,45,6,4]
# l.sort(reverse=True)   # for decesending order 
# l.sort()
# print(l,sorted(l))
# print(sorted(l))    new create list and sorted them 
# print(l.sort())    return none and modify in same place 

'''  
modi=sorted(l,reverse=True)
print(l)
print(modi)
print(l)


try:
    num1 = int(input("Enter the first number: "))
    num2 = int(input("Enter the second number: "))
except :
    print("Please enter a valid integer number.")
else:
    print("Sum of two numbers:", num1 + num2)

    if num2 > num1:
        print("Difference of two numbers:", num2 - num1)
    else:
        print("Difference of two numbers:", num1 - num2)


l=[]
n=int(input())
for i in range(n):
    num=int(input("enter the number :- "))
    l.append(num)
print(l)
'''

#dictonaries in python 

d={"name":"himamnshu singh",
   "branch":"cse-aiml",
   "rollno":5}
 

print(d,len(d),type(d),d["name"])
from collections import Counter

def find_repeated_elements(lst):
    element_count = Counter(lst)
    repeated_elements = [element for element, count in element_count.items() if count > 1]
    return repeated_elements

# input_list = list(map(int, input("Enter space-separated numbers: ").split()))
input_list=[33,4,3,3,2,2]

repeated_elements = find_repeated_elements(input_list)

if repeated_elements:
    print("Repeated elements:", repeated_elements)
else:
    print("No repeated elements found.")
