N, K = map(int,input().split()) #N명, K번째 

circle =[] 

for i in range(1, N+1):
    circle.append(i)

remove = [] #제거된 사람들 
index = 0 #제거된 사람의 인덱스 번호 주의:인덱스 

for j in range(N):
    index += K-1 
    #지워지는 간격 K에서 인덱스이므로 -1을 한 것을 더한 것이 
    #제거될 사람의 인덱스 번호이다
    if index >= len(circle): #한바퀴 돌았을 때 
        index = index%len(circle) #나머지로 인덱스 초기화 
    
    remove.append(str(circle.pop(index)))
    #원에서 제거될 인덱스로 pop을 실행하여 따로 리스트에 추가하여 백업한다. 

print("<",", ".join(remove)[:],">", sep='')
        