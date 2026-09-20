class Solution:
    def evalRPN(self, tokens: list[str]) -> int:
        stack = []
        for token in tokens:
            if token in "+-/*":
                op = token
                y = stack.pop()
                x = stack.pop()

                if op == '+':
                    x+=y
                elif op == '-':
                    x-=y
                elif op == '*':
                    x*=y
                else :
                    x = int(x/y)
                stack.append(x)
            else:
                stack.append(int(token))
        return stack[0]