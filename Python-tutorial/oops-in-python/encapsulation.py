class computer:
    def __init__(self) -> None:
        self.__price=100   # private variable of the class using __ underscore 
        
    def show(self):
        print(self.__price)
        
    def set(self,value):   # set method to change the value in the classs 
        self.__price=value
        
c=computer()
c.show()

# we cant the change the value due to private members 
c.__price=300
c.show() 

# we can change the value during set menthod in the class 
c.set(54)
c.show()