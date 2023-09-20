from math import gcd
import sys
input = sys.stdin.readline

n = int(input())
rings = list(map(int, input().split()))

for i in range(1, n):
    g = gcd(rings[0], rings[i])
    print('{0}/{1}'.format(rings[0]//g, rings[i]//g))