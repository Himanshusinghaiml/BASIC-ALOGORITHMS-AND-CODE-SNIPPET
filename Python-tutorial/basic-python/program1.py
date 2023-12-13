name="himanshu singh"
print("your name is :",name)
# if we print something
for i in range(1,11):
    print( i,"himanshu singh")
i =1  
print("this is printing using while loop ")   
while(i<11):
    print(i,"himanshu singh ",end=' @ ') # use in end ,to give space also print on same line
    # or mention any value 
    i+=1
# Using the end parameter to print on the same line
print("Hello, ", end='')
print("World!")

# You can also use a different character to separate the printed content
print("This", end=' ')
print("is", end=' - ')
print("on", end=' - ')
print("the", end=' - ')
print("same", end=' - ')
print("line.")
# for commenting use # or triple qoutes ''' ''' for multiline comments (this is not python syntax)
'''this is not interpreted by python '''

# in python , variable  name is case sensitive a,and A are different things 
a=5
A=90
A="himanshu singh" # we cam directly assign any type or change the data type 
print(type(a))  # type function is used to check for data types
print(a,type(A),A)
#String variables can be declared either by using single or double quotes:

a,A,c="himanshu singh","aiml","kashi" # holds multiple value  Python allows you to 
#assign values to multiple variables in one line: Note:
# #Make sure the number of variables matches the number of values, or else you will get an error.
print(a,A)
print(c)
#One Value to Multiple Variables
x=y="aiml"
print(x,y) 

#unpacking a collection
fruits = ["apple", "banana", "cherry"] # assign to each variable 
x, y, z = fruits
print(x)
print(y)
print(z)

x1="himanshu "
x2="singh"
x3="aiml"
m=50
print(x1+x2+x3,m)

# using function call in python 
def aiml():
    print("integer value call above ,its a global variable :",m)
    print("string value call above ,its a global variable :"+x3) # acts as str concatenation
aiml()

# x = "awesome"

def myfunc():
  global x
  x= "fantastic"
  print("Python is " + x)

myfunc()

print("Python is " + x)
for i in range(3):
    print()
x = 1    # int
y = 2.8  # float
z = 1j   # complex
#You cannot convert complex numbers into another number type.
#convert from int to float:
a = float(x)

#convert from float to int:
b = int(y)

#convert from int to complex:
c = complex(x)

print(a)
print(b)
print(c)

print(type(a))
print(type(b))
print(type(c))
# line breaks at same position if we use triple  single quotes or doble """"quotes
wx='''hello
himanshu;
how r u ?'''
print(wx)

for i in "himanshu singh":
    print(i)
    
s="this is himanshu singh"
check="singh"
# Check if NOT
# To check if a certain phrase or character is NOT present in a string, we can use the keyword not in.
if(check in s):
    print("yes present in the string s :",check)
else:
    print("not present ")