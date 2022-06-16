def fibonacci(n):
    if n==0:
        return 0
    elif n==1:
        return 1
    else:
        for i in range(2,n+1):
        
            new=fibonacci(n-1)+fibonacci(n-2)
            j=new
            print(j)

n=int(input())
fibonacci(n)



       

        