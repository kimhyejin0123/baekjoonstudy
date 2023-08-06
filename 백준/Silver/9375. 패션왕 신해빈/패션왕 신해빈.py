import sys
input = sys.stdin.readline

t = int(input())

for i in range(t):
    n = int(input())
    clothes = {} 
    
    for j in range(n):
        name, type = input().split() #옷의 이름과 종류를 입력받아
        #clothes 딕셔너리에 추가하고, 이미 있을 경우 1 증가
        #경우의 수만 세면 되므로 종류 type만을 신경쓰고 
        #구체적인 옷 이름은 경우의 수로 더하기만 해주면 된다. 
        if type in clothes:
            clothes[type] += 1 
        else:
            clothes[type] = 1
        
    count = 1
    for key in clothes:
        count *= (clothes[key]+1) #옷 종류마다 모든 경우의 수를 곱해준다
    print(count-1) #알몸일 때의 경우의 수를 하나 빼주어서 마지막으로 출력해줘야 함 