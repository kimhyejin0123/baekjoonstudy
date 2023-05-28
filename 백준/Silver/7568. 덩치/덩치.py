lst = []
N = int(input())

for i in range(N):
    kg, cm = map(int, input().split())
    lst.append((kg,cm))

for i in lst: #명단에 대해서 
    rank =1 #랭크를 1로 초기화하고, 각각을 전부 프린트 
    
    for j in lst:
        if i[0]<j[0] and i[1]<j[1]:
            rank +=1 

    print(rank, end=' ')
