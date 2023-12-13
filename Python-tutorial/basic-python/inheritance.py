class sum:
    a=5
    b=10
    def sum(self):
        print(self.a+self.b)
class mult(sum): # inheritance concepts in python
    a1=20
    b1=3
    def mult1(self):
        print(self.a1*self.b1)
ob=mult()
ob.mult1()
ob.sum()