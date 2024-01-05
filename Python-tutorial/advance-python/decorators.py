def my_decorator(func):
    def wrapper():
        print("Hello, I am running in the decorator with modify")
        func()  # Call the original function inside the wrapper
    return wrapper

# call at rate the symbol @my_decorator   or this type    my_decorator(call_me)()
def call_me():
    print("Running call me function")

# Invoke the function
# my_decorator(call_me)()
# print(my_decorator)
 
#  aruguments with decorators 

def deco(func):
    def modify(*args,**kwargs):
        print("hello himanshu! u r using additon methos with modify the behaviour")
        func(*args,**kwargs)
        print("thanks for using this function ")
    return modify
@deco
def add(a,b):
    print(a+b)
add(4,5) 
# deco(add)(5,6)  # we can also call using simple method 


def repeat(n):
    def decorator(func):
        def wrapper(*args, **kwargs):
            for _ in range(n):
                func(*args, **kwargs)
        return wrapper
    return decorator

@repeat(3)
def say_hello():
    print("Hello!")

# The function is now decorated to repeat three times
say_hello()

def decoprint1(n):
    def decoprint12(myfuncprint1):
        def wrap():
            for _ in range(n):
               myfuncprint1()
        return wrap
    return decoprint12

@decoprint1(5)
def print1():
    print("hello himanshu singh")
print1()
