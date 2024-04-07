class name:
    a=25
    b=30
    def printing(self):
        print("hello himanshu singh")
    def sum_number(self):
        print(self.a+self.b)

class student(name):  # here inheritence concepts 
    def __init__(self,name) -> None:
        self.s=name
    def stu_name(self):
        print(self.s)
ob=student("himanshu singh")  # this is object 
ob.printing() # here creating a object of student class
print(type(ob))
print("   printing polymorphism concepts below # example \n")
#polymorphism in python 
class poly:
    def printing1(self):
        print("himanshu singh function 1")
    def printing1(self,a):
        print("run function 2 of the poly",a)
ob3=poly()
ob3.printing1(26)
        
# def num(a,b): this is one of the polymorphism example in python 
#     print(a+b)
# num(1,3)
        
        