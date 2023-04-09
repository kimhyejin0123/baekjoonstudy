import sys

N=int(sys.stdin.readline().strip()) 

n_list=[]

for i in range(0,N):
    a=int(sys.stdin.readline().strip()) 
    n_list.append(a)
    
a=sorted(n_list)

for i in a:
    print(i)