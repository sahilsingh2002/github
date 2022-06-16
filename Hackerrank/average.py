
def average(s):
    a=set(s)
    b=sum(a)/len(a)
    return b
    

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    result = average(arr)
    print(result)