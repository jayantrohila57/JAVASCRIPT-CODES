class queue:
    def __init__(self):
        self.items = []
    def is_empty(self):
        return self.items ==[]
    def enqueue(self,items):
        self.items.insert(0,items)
    def dequeue(self):
        return self.items.pop()
    def print_queue(self):
        print(self.items)
