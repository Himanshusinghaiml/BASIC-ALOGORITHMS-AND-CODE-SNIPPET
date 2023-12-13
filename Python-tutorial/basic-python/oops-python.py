# there are four pillars of python 
'''
class
objects
encapsulation
polymorphism
abstraction
inheritance 
 '''
class calculator:
    def __init__(self,num) -> None:
        self.value=num
    def getter(self):
        return self.value
    def setter(self,num):
        if num < 0:
            print("number less than zero its set automaticcaly 0")
            self.value=0
        else:
            self.value=num
obj1=calculator(100)
print(obj1.getter()) # getter 

obj1.setter(51)
print(obj1.getter())

obj1.setter(-7) # to set zero 
print(obj1.getter())
print(type(obj1))

   