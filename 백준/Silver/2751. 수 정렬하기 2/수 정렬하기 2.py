import sys

N=int(sys.stdin.readline().strip()) # 변경부분
n_list=[]
for i in range(0,N):
    a=int(sys.stdin.readline().strip()) #변경부분
    n_list.append(a)
a=sorted(n_list)
for i in a:
    print(i)