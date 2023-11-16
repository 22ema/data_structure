class Node():
    """ Node """
    def __init__(self, value):
        self.value = value
        self.next = None

class BrowserHistory():
    """ linked list """
    def __init__(self, value):
        node = Node(value)
        self.head = node
        self.tail = node
        self.index = 0
        print(None)
    
    def len(self):
        """ function """
        count = 1
        current_node = self.head
        while current_node.next is not None:
            current_node = current_node.next
            count += 1
        return count

    def visit(self, value):
        """ function """
        node = Node(value)
        current_node = self.head
        for _ in range(self.index):
            current_node = current_node.next
        current_node.next = node
        self.index += 1
        print("None")
    
    def back(self, number):
        """ function """
        current_node = self.head
        if self.index < number:
            for _ in range(0):
                current_node = current_node.next
            self.index -= self.index
            print(current_node.value)
        else:
            for _ in range(self.index-number):
                current_node = current_node.next
            self.index -= number
            print(current_node.value)
    
    def forward(self, number):
        current_node = self.head
        if self.len()-self.index < number:
            for _ in range(self.len()-1):
                current_node = current_node.next
            self.index = self.len()-1
            print(current_node.value)
        else:
            for _ in range(self.index+number):
                current_node = current_node.next
            self.index += number
            print(current_node.value)

if __name__ == "__main__":
    browserHistory = BrowserHistory('leetcode.com')
    browserHistory.visit("gooogle.com")
    browserHistory.visit("facebook.com")
    browserHistory.visit("youtube.com")
    browserHistory.back(1)
    browserHistory.back(1)
    browserHistory.forward(1)
    browserHistory.visit("linkedin.com")
    browserHistory.forward(2)
    browserHistory.back(2)
    browserHistory.back(7)
