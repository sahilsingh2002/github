import os
import math
import random
import re
import sys



def solve(s):
    L=s.split()
    
    for i in (L):
       return(i.capitalize())
    return(L)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = solve(s)

    fptr.write(result + '\n')

    fptr.close()

