class Node():
    def __init__(self, value):
        self.prev = None
        self.value = value
        self.next = None

class BrowserHistory():
    def __init__(self, homepage):
        node = Node(homepage)
        self.head = node
        self.tail = node
        self.curr = node
    
    def visit(self, url):
        node = Node(url)
        self.curr.next = node
        node.prev = self.curr
        self.tail = node
        self.curr = node
        return None

    def back(self, steps):
        while steps > 0:
            print(steps)
            if self.curr.prev == None:
                break
            self.curr = self.curr.prev    
            steps -= 1
        return self.curr.value
    
    def forward(self, steps):
        while steps > 0:
            if self.curr.next == None:
                break
            self.curr = self.curr.next
            steps -= 1
        return self.curr.value

'''
[["leetcode.com"],["google.com"],["facebook.com"],["youtube.com"],[1],[1],[1],["linkedin.com"],[2],[2],[7]]
'''

if __name__ == "__main__":
    result_list = list()
    browserHistory = BrowserHistory("leetcode.com")
    result_list.append(browserHistory.visit("google.com"))
    result_list.append(browserHistory.visit("facebook.com"))
    result_list.append(browserHistory.visit("youtube.com"))

    result_list.append(browserHistory.back(1))
    result_list.append(browserHistory.back(1))
    result_list.append(browserHistory.forward(1))

    result_list.append(browserHistory.visit("linkedin.com"))
    result_list.append(browserHistory.forward(2))
    result_list.append(browserHistory.back(2))
    result_list.append(browserHistory.back(7))
    print(result_list)
