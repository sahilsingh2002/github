import random
n=list(range(101))
random_num=random.choice(n)
points=100
while (points>0):
    print()
    User=int(input("Enter Your number : "))
    if User!=random_num:
        print()
        print("Wrong number")
        points-=10
        hint=0
        hintlist=[]
        if User>random_num:
            print()
            print("Your number is bigger than required")
        else:
            print()
            print("Your number is smaller than required")
        for i in range(2,random_num):
            if random_num%i==0:
                hint+=1
                hintlist.append(i)
        if hint==0:
            print()
            print("Hidden number is a prime number")
        else:
            print()
            print("Hidden number can be divided by ",random.choice(hintlist))
    elif User==random_num:
        points-=100
        print()
        print("Yes, You won. The number was",random_num)
        exit()
    
print("You lose. The number was", random_num)