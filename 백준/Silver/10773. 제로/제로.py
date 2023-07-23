import sys 

K = int(input()) 
stk = []

for i in range(K): 
    num = int(sys.stdin.readline())
    
    if(num == 0): #num이 0이면 pop
        stk.pop()
    else:
        stk.append(num) #아닐 경우 num을 추가 
        
print(sum(stk))