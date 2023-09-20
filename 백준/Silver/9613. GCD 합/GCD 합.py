import sys
input = sys.stdin.readline
import math

T = int(input()) 
for i in range(T):
    array = list(map(int, input().split()))
    
    total = 0 
    
    N = len(array)
    for j in range(1, N):
        for m in range(j+1, N):
            total += math.gcd(array[j],array[m])
            
    print(total)
