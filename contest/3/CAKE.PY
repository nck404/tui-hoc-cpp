f=open('CAKE.INP')
s=f.readline()
f.close()
f=open('CAKE.OUT','w')
S=0
D=0
a=[]
for i in s:
    if i=='D':
        D+=1
        a.append(0)
    else:
        S+=1
        a.append(1)
if S%2==1 or D%2==1:
    f.write('-1')
else:
    n=len(s)
    for i in range(n):
        if sum(a[i:n//2+i]) if n//2+i<=n else sum(a[i:n])+sum(a[0:abs(n//2-i)])==sum(a)//2:
            f.write(str(min(i,abs(n//2-i))))
            f.write(' ')
            f.write(str(max(i,abs(n//2-i))))
            break
f.close()