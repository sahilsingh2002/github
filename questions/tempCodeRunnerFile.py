T=int(input())
for i in range(T):
    q=0
    N=int(input())
    a=input().split()
    j=0
    while j in range(N-1):
        if a[i]>a[i+1]:
            q+=1
            break
        
        break
    if q>0:
        print("No")
    else:
        print("Yes")
