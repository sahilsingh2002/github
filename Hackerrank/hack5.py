if __name__ == '__main__':
    c=[]
    d=[]
    N = int(input())
    for i in range(N):
        d=input().split()
    for a,b in c:
        if d==["insert",a,b]:
            c.insert(a,b)
        elif d==["print"]:
            print(c)
        elif d==["remove",a]:
            c.remove(a)
        elif d==["append",a]:
            c.append(a)
        elif d==["sort"]:
            c.sort()
        elif d==["pop"]:
            c.pop()
        elif d==["reverse"]:
            c.reverse()
    print(c)