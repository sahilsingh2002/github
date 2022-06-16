n=int(input())
for i in range(n):
    for j in range(n-i):
        print(" ",end="")
    q=1
    while q<=(i+1):
        print(q,end="")
        q+=1
    print()
