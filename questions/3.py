T=int(input())
for i in range(T):
    q=0
    N=int(input())
    a=input().split()
    
    for i in range(N-1):
        if a[i]<=a[i+1]:
            continue
        else:
            q+=1
            break
    if q>0:
        print("No")
    else:
        print("Yes")
