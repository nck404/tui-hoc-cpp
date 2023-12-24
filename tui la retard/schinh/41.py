def cc(N,K):
    nhi_phan = int(N, 2)
    return nhi_phan % 2*k == 0

N = input()
K = input()
if cc(N,K):
    print("YES")
else:
    print("NO")
