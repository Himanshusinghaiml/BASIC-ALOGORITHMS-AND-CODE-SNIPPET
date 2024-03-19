class node:
    def __init__(self,data) -> None:
        self.data=data
        self.next=None
   
        
class linkedlist:
    def __init__(self) -> None:
        self.head=None
    
    def append(self,value):
        new_node=node(value)
        if self.head is None:
            self.head=new_node
            return new_node
        last_node=self.head
        
        while last_node.next is not None:
            last_node=last_node.next
        last_node.next = new_node
         
     
    def print(self):
        print('this is singly list')
        current=self.head
        while current is not None:
            print(current.data,end="->")
            current=current.next
        print("None")
            
        
        
first_object=linkedlist()
first_object.append(10)
first_object.append(20)
first_object.append(50)
first_object.append(100)
first_object.print()

