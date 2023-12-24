N = input()

n = len(N)

if (n >= 2 and (N[n - 1] == '0' and N[n - 2] == '0')) or (int(N) % 25 == 0):
    print("YES")
else:
    print("NO")
