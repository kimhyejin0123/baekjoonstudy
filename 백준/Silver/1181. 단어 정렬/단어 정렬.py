import sys

w = []
for _ in range(int(sys.stdin.readline())):
    w.append(sys.stdin.readline().rstrip())
    
# 이 경우 이 부분에서 맞았습니다를 받습니다.
w = sorted(list(set(w)))
w.sort(key=len)

# -----------------------------------------

for i in w:
    print(i)