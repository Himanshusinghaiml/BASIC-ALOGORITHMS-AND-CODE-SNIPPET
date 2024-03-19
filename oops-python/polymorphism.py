# polymorphism -> one to many form 
# here method  are same but  , properties , nature are changed based on different-diffrennt 
#circumstances or situation .

# lets take  basic example to understand polymorphism  
def test(a,b):
    print(a+b)  # plus operator nature r changed 
# here method are same but nature or properties r changed on diffrent parameters input .
test(5,10)
test("himanshu","singh")

#now using class polymorphism
class laptop:
    def himanshu(self):
        print("himanshu laptop")
class mobile:
    def himanshu(self):
        print("aiml mobile ")
# creating a simple method and calling them 
def call(x):
    x.himanshu()
obj_laptop=laptop()
obj_mobile=mobile()
call(obj_laptop)
call(obj_mobile)
# this is the example of polymorphism  to better understand , how its actually work .


class Animal:
    def sound(self):
        print("Animal sound")

class Dog(Animal):
    def sound(self):
        print("Woof!")

class Cat(Animal):
    def sound(self):
        print("Meow!")

def make_sound(animal):
    animal.sound()

dog = Dog()
cat = Cat()

make_sound(dog)  # Output: Woof!
make_sound(cat)  # Output: Meow!
