class node:
    def __init__(self,data,next):
        self.data = data
        self.next = next

class linkedlist:
    def __init__(self):
        self.head = None

    def add_at_front(self,data):
        self.head = node(data, None)

    def add_at_end(self,data):
        if not self.head:
            self.head = node(data,None)
            return
        curr = self.head
        while curr.next:
            curr = curr.next
        curr.next = node(data,None)

    def get_last_node(self):
        n = self.head
        while n!=None:
            print(n.data,end="=>")

    def print_list(self):
        n=self.head
        while n != None:
            print(n.data, end = '=>')
            n = n.next
        print()




