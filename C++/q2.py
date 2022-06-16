


T=int(input())
if 1<=T<=30:

    for i in range(T):
        a,b,c,d,e,f=input().split()
        L1=[]
        L2=[]
        d1=int(a)
        a1=int(b)
        d2=int(c)
        a2=int(d)
        L=int(e)
        R=int(f)
        if 1<=d1<=2*(10**9) and 1<=d1<=2*(10**9) and a1>=-2*(10**9) and a2>=-2*(10**9) and L<=2*(10**9) and R<= 2*(10**9):
    

            for i in range(R-L):
                q1= a1+(d1*i) 
                if R>=q1>=L:
                    L1.append(q1)
            for j in range(R-L):
                q2= a2+(d2*j)
                if R>=q2>=L:
                    L2.append(q2)
                
            
            s1=set(L1)
            s2=set(L2)
            S=s1.intersection(s2)
            print(len(S))
        else:
            print("Either of d1,d2,a1,a2,R,L has incorrect value")
else:
    print("Error! Wrong amount of testcases")

    