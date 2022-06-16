n,m = input().split()
a=int(n)
b=int(m)

for i in range(1,a+1):
    if i==(a+1)/2:
        print ("WELCOME".center(b,"-"))
    elif i<(a+1)/2:
        print((".|."*((2*i)-1)).center(b,"-"))
        
    else:
        print((".|."*(((a-i)*2)+1)).center(b,"-"))
