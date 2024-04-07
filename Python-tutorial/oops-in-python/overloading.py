# class himanshu:
#     def show(self,*args):
#         return sum(args)
# obj1=himanshu()
# ans=obj1.show(4,5,5,6)
# print(ans)


# class student:
#     def show(self,a,b,c):
#          print(a+b+c)
#     def show(self,a):
#         print(a)
# ob=student()
# ob.show(5,4)
# ob.show()


# class tiku:
#     def tiku1(self,a):
#         print("himanshu singh",a)
#     def tiku1(self,a):
#         print("tiku singh ",a)
# t=tiku()
# t.tiku1(25)

def p(fun):
    def himanshu():
        print("good morning")
        fun()
    return himanshu
# @p    is eqivalent to this p(hello)()
def hello():
    print("this is hello funtion")

p(hello)()