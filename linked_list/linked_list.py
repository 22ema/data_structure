class Node():
    def __init__(self, value=0, next=None):
        self.value = value
        self.next = next

class LinkedList():
    def __init__(self):
        self.head = None
        self.tail = None
    def append_left(self, value):
        node = Node(value)
        if self.head is None:
            self.head = node
            self.tail = node
        else:
            current_node = self.head
            while(current_node.next):
                current_node = current_node.next
            current_node.next = node
    ## 시간 복잡도는 N이다.
    def get(self, idx):
        if self.len() <= idx:
            print("out of index")
            return None
        current_node = self.head
        for _ in range(idx):
            current_node = current_node.next
        return current_node.value
    
    def append(self, value):
        node = Node(value)
        if self.head is None:
            self.head = node
            self.tail = node
        else:
            current_node = self.tail
            current_node.next = node
            self.tail = node

    def len(self):
        if self.head is None:
            return 0
        else:
            count = 1
            current_node =self.head
            while current_node.next:
                count+=1
                current_node = current_node.next
            return count
    
    def insert(self, idx, value):
        node = Node(value)
        if self.len() < idx:
            print("wrong index number. it's so big")
        elif self.len() == idx:
            current_node = self.head
            for _ in range(idx-1):
                current_node = current_node.next
            current_node.next = node
        else:
            current_node = self.head
            for _ in range(idx-1):
                current_node = current_node.next
            node.next = current_node.next
            current_node.next = node
    
    def remove(self, idx):
        if self.len() <= idx:
            print("wrong index number. it's so bing")
        else:
            current_node = self.head
            for _ in range(idx-1):
                current_node = current_node.next
            current_node.next = current_node.next.next
