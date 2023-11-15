from linked_list import Node, LinkedList


if __name__ == "__main__":
    a = 1
    b = 2
    c = 3
    d = 4
    linked_l = LinkedList()
    linked_l.append_left(a)
    linked_l.append_left(b)
    linked_l.append_left(c)
    linked_l.append_left(d)
    print(f"get: {linked_l.get(0)}, {linked_l.get(1)}, {linked_l.get(2)}, {linked_l.get(3)}")
    linked_l.insert(4, 5)
    print(f"get: {linked_l.get(0)}, {linked_l.get(1)}, {linked_l.get(2)}, {linked_l.get(3)}, {linked_l.get(4)}")
    linked_l.remove(4)
    print(f"get: {linked_l.get(0)}, {linked_l.get(1)}, {linked_l.get(2)}, {linked_l.get(3)}, {linked_l.get(4)}")