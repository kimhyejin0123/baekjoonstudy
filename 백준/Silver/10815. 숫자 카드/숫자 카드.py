n=int(input()) #숫자카드의 총개수 
cards=set(map(int,input().split(' ')))

n2=int(input()) #비교해야 할 정수 개수
targets=list(map(int,input().split(' ')))

for i in targets:
    if i in cards :
        print(1, end=' ')
    else :
        print(0, end= ' ')

#가지고 있는 숫자카드 목록을 set으로 해서 비교하지 않으면 시간초과 오류가 난다. 
  
            