class calculator:
    num1=10
    num2=30
    def __init__(self,a,b) -> None:
        self.c1=a
        self.c2=b
    def sum(self,a,b):
        return a+b
    
    def sum1(self):
        return self.c1+ self.c2
    
ob=calculator(8,8)
print(ob.num1)
print(ob.sum(5,6))
print(ob.sum1())