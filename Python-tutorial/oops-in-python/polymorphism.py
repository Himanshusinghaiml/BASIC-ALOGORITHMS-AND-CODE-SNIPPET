'''

In Python, method overloading (having multiple methods 
with the same name but a different number or type of parameters)
isn't directly supported. If you define multiple methods with the same name, the
last one defined will override any previous ones. Therefore, in your example,
the second add method will override the first one.
In your code, you're defining a class called sum, and within that class, 
you have two methods named add. However, in Python, method overloading doesn't 
work the way it does in some other languages like Java or C++. In Python, 
the latest definition of a method with a given name will 
override any previous definitions, and only the latest one will be used.
 
 
 same as working method overloading in java and cpp but not in python
 public class Calculator {
    // First add method
    public int add(int a, int b) {
        return a + b;
    }

    // Second add method
    public int add(int a, int b, int c) {
        return a + b + c;
    }

    public static void main(String[] args) {
        Calculator calc = new Calculator();
        System.out.println(calc.add(2, 3));      // Calls the first add method
        System.out.println(calc.add(2, 3, 4));   // Calls the second add method
    }
}

'''
class sum:
    def add(self,a,b):
        return a+b
    def add(self,a,b,c):
        return a+b+c
ob1=sum()
ans1=ob1.add(5,4,9)
ans2=ob1.add(10,20,30)
print(ans1)
print(ans2)

# class sub:
#     def sub(self,a,b,c=None):
#          if c is not None:
#              return a+b+c
#          else:
#              return a+b
# ob=sub()
# print(ob.sub(5,4))
# print(ob.sub(2,2,2))

#   Calls the first sub method

class Sub:
    def sub(self, a, b, *args):
        if args:
            return a + b + sum(args)
        else:
            return a + b

ob = Sub()
print(ob.sub(5, 4))      # Calls the first sub method
print(ob.sub(2, 2, 2))    # Calls the first sub method
'''
Python supports function/method overloading, which allows a 
class to have multiple methods with the same name but with a different number or type of parameters.
The appropriate method is selected at runtime based on the arguments provided.  
'''