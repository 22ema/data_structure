
def good_weather(inputs):
    stacks = list()
    for idx, value in enumerate(inputs):
        if not stacks:
            stacks.append((value, idx))
        else:
            x = stacks.pop()
            if x < value:
            stacks.append((value, idx))


if __name__ == "__main__":
    inputs = [76, 21, 73, 72, 69, 67, 73, 80, 78]
    good_weather(input)