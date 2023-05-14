from collections import deque
s=deque([])
num=[]
a,b=map(int,input().split())
for i in range(1,a+1):
    s.append(i)
while s:
    for i in range(b-1):
        s.append(s.popleft())
    num.append(s.popleft())


s = ""
for i in range(len(num)):
    s += str(num[i])
    if i < len(num) - 1:
        s += ", "
print('<', s, '>', sep="")
