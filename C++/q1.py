def print_formatted(number):
    for i in range(1,number+1):
        a=oct(i)
        b=hex(i)
        c=bin(i)
        print(f"{str(i).rjust(len(bin(number)[2:]))} {oct(i)[2:].rjust(len(bin(number)[2:]))} {hex(i)[2:].upper().rjust(len(bin(number)[2:]))} {(bin(i)[2:]).rjust(len(bin(number)[2:]))}")

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)







