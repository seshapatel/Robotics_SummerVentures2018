from math import sqrt
import sys

def factors(n):
    for i in range (1, int(sqrt(n))+1):
        if n%i == 0 and i != sqrt(n):
            print i, n/i
        elif n%i == 0:
            print i

if __name__ == '__main__':
    factors[sys.argv(1)]
        
