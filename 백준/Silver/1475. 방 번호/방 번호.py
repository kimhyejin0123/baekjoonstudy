import sys
input=sys.stdin.readline
 
numbers=list(map(int, input().rstrip())) #런타임 에러 방지

count=[0]*10 #0부터 9까지를 count에 초기화 

for n in numbers:
    count[n]+=1

a=(count[6]+count[9]) #6과 9 예외 처리 
if a%2==1:
    a+=1
count[6]=a//2
count[9]=a//2

print(max(count)) #count 중 가장 큰 값을 출력 