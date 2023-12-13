# placement preparation for  Slicing 

# You can return a range of characters by using the slice syntax.

# Specify the start index and the end index, separated by a colon, to return a part of the string.
a="himanshu,singh"
j=0
for i in a:
    print(j,i)
    j+=1
print() # above we can directly print the string 
print()  # below we define range and print index and character of the strings
for i in range(len(a)):
    print(i,a[i])
    
print(a[2:5]) #Get the characters from position 2 to position 5 (not included position 5 ):
print(a[:5])# print the starting index
w=a[:2]  # we cam alos assign in varaible and access
print(w)
a="himanshu singh"
print(a.upper(),a.lower(),a.split())

# we can not combine string and int but we can achieve   combine strings and numbers by using the format() method!
aq="this is himanshu singh from varansi i am {} years old. "
at=21
#The format() method takes the passed arguments, formats them, and places them in the string where the placeholders {} are:
print(aq.format(at))
u= "We are the so-called \"Vikings\" from the north."
print(u)
# input from the user in python 
myname=int(input('enter the your name '))
print('your name is :',myname)
print(type(myname))

#note instead using format we can use f means formatted string literal and define curly braces{} {}
fname='himanshu'
lname="singh"
age=21
print(f"my name is {fname} {lname} ans i am {age} years old.")

