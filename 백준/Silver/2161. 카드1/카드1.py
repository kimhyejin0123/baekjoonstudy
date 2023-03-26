result=[]

n=int(input())

cards = list(range(1,(n+1)))
cards.reverse() 

while len(cards)>1 :
    result.append(cards.pop())
    cards.insert(0,cards.pop())

result.append(cards.pop())

for i in result :
    print(i, end=" ")
