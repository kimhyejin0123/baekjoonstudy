import sys
input = sys.stdin.readline 
#반복문으로 여러줄 입력받는 상황에서는 반드시
#sys.stdin.readline()을 사용해야 시간초과가 발생하지 않는다.

s = set()

for _ in range(int(input())):
  name, log = input().rstrip().split()
  if log == 'enter':
    s.add(name)
  if log == 'leave':
    s.remove(name)
working = sorted(s, reverse=True)
for w in working:
  print(w)
        