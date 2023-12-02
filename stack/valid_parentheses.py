"""
괄호가 입력으로 들어왔을 때, 괄호들이 유효한지 판단하기
stack으로 문제 풀기
"""

def valid_parentheses(input_parenth):
    stacks = list()
    for i in input_parenth:
        if i=="(" or i=="{" or i=="[":
            stacks.append(i)
        else:
            if not stacks:
                return False
            else:
                x = stacks.pop()
                if i == ")" and x == "(":
                    pass
                elif i == "}" and x == "{":
                    pass
                elif i == "]" and x == "[":
                    pass
                else:
                    return False
    if stacks:
        return False
    return True
         

if __name__ == "__main__":
    input_parenth = "({[]}){"
    result = valid_parentheses(input_parenth)
    print(result)
