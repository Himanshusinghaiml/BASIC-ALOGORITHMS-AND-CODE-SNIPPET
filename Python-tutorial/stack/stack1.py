class stack:
    def __init__(self) -> None:
         self.list=[]
         
    def push(self,value):
        self.list.append(value)
        
    def popstack(self):
        if len(self.list)>0:
           self.list.pop()
        else:
            print("statck is empty")
            
    def print_stack(self):
        for item in reversed(self.list):
            print(item,end=" ")    
s=stack()
s.push(10)
s.push(20)
s.push(30)
s.push(40)
s.push(50)
print(s.list)
s.popstack()
s.print_stack()
# print(s.list)
 



