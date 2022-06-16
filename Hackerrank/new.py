if __name__ == '__main__':
    c=[]
    d=set()
    n=(int(input()))
    for i in range(n):
        name = input()
        score = eval(input())
        L=[name,score]
        d.append(score)
        c.append(L)
    c.sort()
    e=min(d)
    for z,m in c:
        if m==e:
            c.remove(z,m)
    d.remove(e)
    f=min(d)
    
    for x,y in c:
        if y==f:
                print(x)