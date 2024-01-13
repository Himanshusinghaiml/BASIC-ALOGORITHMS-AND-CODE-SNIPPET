class node:
    def __init__(self,data) :
        self.data=data
        self.next=None
        
class linkedlist():
    def __init__(self):
        self.head = None
    
    def append(self, data):
        new_node = node(data)
        if self.head is None:
            self.head = new_node
            return
        last_node = self.head
        while last_node.next!=None:
            last_node = last_node.next
        last_node.next = new_node
        
    def print(self):
        current_node = self.head
        while current_node:
            print(current_node.data, end=" -> ")
            current_node = current_node.next
        print("None")
        
ob1=linkedlist()
ob1.append(50)
ob1.append(75)
ob1.print()
