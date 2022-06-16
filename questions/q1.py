n=int(input())
sum=0
originaln=n
while n>0:
    lastdigit=n%10
    sum+=pow(lastdigit,3)
    n=n//10
    print(n)
    print(sum)

if sum==originaln:
    print("Armstrong")
else:
    print("not")