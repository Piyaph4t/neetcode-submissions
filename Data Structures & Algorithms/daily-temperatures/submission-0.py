class Solution:
    def dailyTemperatures(self, temperatures: list[int]) -> list[int]:
        results = [0]*len(temperatures)
        stack = []
        for idx, temp in enumerate(temperatures):
            while len(stack) and stack[-1][0] < temp:
                top_temp, top_idx = stack.pop()
                results[top_idx] = idx - top_idx
            stack.append((temp,idx))
            # print(f'stack: {stack}')
            # print(f'result: {results}')
        return results