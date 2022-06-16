a,b=input().split()
N=int(a)
X=int(b)
R=input().split()
j=1
for i in range(len(R)):
    q=int(R[i])
    p=q+X
    d=i+1
    while d<=len(R)-1:
        if p<int(R[d]):
            j+=1
        else:
            j-=1
            
    break
print(j)
    
        
        
    