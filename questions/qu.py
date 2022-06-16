T=int(input())
for i in range(T):
    n=int(input())
    N=n-1
    q=N//5
    if N%5==0:
        print (2*q)
    elif N%5==4:
        print(2*q+2)
    else:
        print(2*q+1)
    


