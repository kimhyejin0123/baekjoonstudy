import sys 
input = sys.stdin.readline

N = int(input())
stack = []

for i in range(N):
    #명령어 + 숫자 로 나오므로 split 해서 입력받아야 함 
    target = input().split()
    order = target[0] #입력 중 첫번째만을 명령어 함수로 가져옴 
    
    if order == "push" :
        value = target[1]
        stack.append(value)
       
    elif order == "top" :
        if len(stack) == 0:
            print(-1)
        else :
            print(stack[-1])
            
    elif order == "size" :
        print(len(stack))
        
    elif order == "empty" :
        if len(stack) == 0:
            print(1)
        else : 
            print(0)
            
    elif order == "pop" :
        if len(stack) == 0:
            print(-1)
        else : 
            print(stack.pop())