#1463

M,N = map(int, input().split())

for i in range(M, N+1) :
    flag = False 
    if (i == 1) :
        continue 
    for j in range(2, int(i**0.5)+1) :
        if (i % j == 0) :
            flag = True 
            break 
    if (flag ==  False ) :
        print(i)

