
n = int(input())
integer_list = map(int, input().split())
for i in range(n):
    d=tuple(integer_list)
    t=hash(d)
    print(t)
