T=int(input())

for i in range(T):
    q=0
    N=int(input())
    a=input().split()
    b=input().split()
    for j in range(N):
        for k in range(j+1,N):
            if int(a[j])^int(a[k])==int(b[j])^int(b[k]):
                q+=1
    print(q)
                

