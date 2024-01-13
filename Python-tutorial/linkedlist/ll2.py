class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def deleteNodeWithoutHead(node_to_delete):
    # Check if the node is not the last node
    if node_to_delete is not None and node_to_delete.next is not None:
        # Copy the data from the next node to the current node
        node_to_delete.data = node_to_delete.next.data

        # Change the link of the current node to skip the next node
        node_to_delete.next = node_to_delete.next.next
    else:
        # Cannot delete the last node without the head reference
        print("Cannot delete the last node without head reference")

# Example usage:
# Create a linked list: 1 -> 2 -> 3 -> 4
head = Node(1)
head.next = Node(2)
head.next.next = Node(3)
head.next.next.next = Node(4)

# Delete the node with value 2
node_to_delete = head.next
deleteNodeWithoutHead(node_to_delete)

# Print the modified linked list: 1 -> 3 -> 4
current = head
while current is not None:
    print(current.data, end=" -> ")
    current = current.next
