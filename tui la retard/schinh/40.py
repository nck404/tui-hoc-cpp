def cc(N):
    nhi_phan = int(N, 2)
    return nhi_phan % 5 == 0

N = input()
if cc(N):
    print("YES")
else:
    print("NO")
