N = int(input())

count=0 

for i in range(1, N+1): #자연수이므로 1부터 진행하여야 함 
    number = list(map(int,str(i)))
    
    if i<100 :
        count += 1 #100보다 작으면 무조건 한수이다. 
    elif (number[0]-number[1] == number[1]-number[2]):
        count += 1 

print(count)
