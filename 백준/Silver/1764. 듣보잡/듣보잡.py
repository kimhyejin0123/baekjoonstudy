# import sys
# input = sys.stdin.readline

N, M = map(int, input().split())
ns = set()
ms = set()

for i in range(N):
    ns.add(input())
    
for i in range(M):
    ms.add(input())

sort = sorted(list(ns & ms))

print(len(sort))
for i in sort:
    print(i)