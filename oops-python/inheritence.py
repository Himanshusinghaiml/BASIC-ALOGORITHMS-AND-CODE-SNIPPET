# we inherit the properties of multi class in the child class which is known as derived class.
class Cse:
    def printing1(self):
        print("Aman tiwari cse")
class Aiml(Cse):
    def priting2(self):
        print("himanshu singh Aiml")
        
obj_aiml=Aiml()
obj_aiml.printing1()
obj_aiml.priting2()


#  when we same method name then what happens.

class himanshu:
    def s(self):    
        print("\n himanshu class")
class Singh(himanshu):
    def s(self):
        super().s()  # when we want to print method of parent class then use  it super keyword . 
        print("singh class")
obj_singh=Singh()
obj_singh.s() # output  would be (singh class ) here achiving method overriding -> definition changing here 


# if we want multiclass inherti in to the one class so 
# MRO method resolution oreder 
print("**********************")
class A:
    def a(self):
        print("A class")
class B:
    def a(self):
        print("B class priting ")
class C(A,B):    # inherit the properties in to the c class of above of two class . 
    def a(self):
        super().a()
        super().a()
        print("C class priting variable ")
obj_c=C()
obj_c.a()