# this is classes and objects 
# we use class for maintainbility , reusability ,,and proper define struture in the modular format .
class Aiml:
    num=10
    def all_student(self):
        print("himanshu singh","amarendra yadav", "shivam kushwaha")
    def printing(self):
        print("roll no :- ",2004281530003)
obj_a=Aiml()
obj_b=Aiml()
print(type(obj_a))
obj_a.all_student()
obj_b.all_student()
print(obj_a.num)  # class name is Aiml
# we can also  create objects without define a class 
n=10
print(type(n))  # class name integer 
# n is also objects which is objects of integer class , we do not define a class,  its already inbuilt 
        