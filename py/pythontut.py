n1=int(input())
n2=int(input())
n3=int(input())
print((n1+n2+n3)/3)

Gross=float(input("gross"))
dependent=int(input("dependent"))
deduct=(dependent*3000)
taxable=Gross-10000-(deduct)
print(taxable)

List=['Red', 'Green', 'white', 'Black', 'Pink', 'Yellow']
List1=List
List.pop(3)
print(List)
List1[3:4]=["Purple"]
print(List1)


#Assignment2

stringg="Python is a case sensitive language"
print(len(stringg))
print(stringg[::-1])
str2=stringg[10:26]
print(str2)
print(stringg.find("a"))
L1=stringg.split()
print()
for i in range(len(L1)):
    print(L1[i],end="")

a=56
b=10
print(a&b)
print(a|b)
print(a^b)
print(a>>2,b>>2)
print(a<<2,b<<4)

s1=int(input())
s2=int(input())
s3=int(input())

if s1+s2<s3 or s1+s3<s2 or s2+s3<s1:
    print("No")
else:
    print("yes")


str=input().lower().strip()
if " " not in str:
    L2=list(str)
    L4=[]
    for i in range(len(L2)):
        a=(L2[i],L2.count(L2[i]))
        L4.append(a)
    sett=set(L4)
    L4=list(sett)
    for i,j in L4:
        print(i,"=",j)
        
else:
    L3=str.split()
    L4=[]
    for i in range(len(L3)):
        a=(L3[i],L3.count(L3[i]))
        L4.append(a)
    sett=set(L4)
    print(sett)
    L4=list(sett)
    for i,j in L4:
        print(i,"=",j)



List3=(input().split())
List4=[]
for i in List3:
    a=int(i)
    List4.append((a,a**2))
print(List4)

string23="ABCDEFGHIJK"
print(string23)
for i in range(len(string23)):
    string23=(string23[:-2])
    print(string23.center(11))

d={}
d1={}
d2={}
List6=[]
List7=[]
while True:
    Name=input("Enter Name :")
    SID=int(input("Enter SID"))
    List6.append(SID)
    List7.append(Name)
    d[SID]=Name
    ask=input("Do you want to enter things again? Y or N:").upper()
    if ask=="Y":
        continue
    else:
        print(d)
        break
List6.sort()
List7.sort()
for i in List6:
    d1[i]=d[i]
print(d1)
for j in List7:
    for i in range(len(List7)):
        d2[i]=j
print(d2)



    
