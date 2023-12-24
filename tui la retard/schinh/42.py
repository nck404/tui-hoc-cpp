
def calculate_remainder(N, M):
    remainder = 0
    for digit in N:
        remainder = (remainder * 10 + int(digit)) % M
    return remainder
N = input()
M = int(input())

result = calculate_remainder(N, M)
print(result)
