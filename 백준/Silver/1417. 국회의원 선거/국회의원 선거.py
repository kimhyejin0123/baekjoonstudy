votes_list=[] #각 후보자 마다 득표수를 담는 리스트 

N= int(input())
for i in range(N): #입력받은 N 만큼 리스트에 추가 
    votes_list.append(int(input()))    

rest_list=votes_list[1:N] #다솜이를 제외한 나머지 후보 리스트 생성 

dasom=votes_list[0]
count=0

if N==1 : 
    pass
else: 
    if (dasom>max(rest_list)) : #다솜이가 최다 득표수거나, 입후보자가 다솜뿐일 경우 
        pass 
    else : 
        while (dasom<=max(rest_list)) : 
            for i in range(len(rest_list)): #나머지 입후보자 수만큼 반복 
                while(rest_list[i]==max(rest_list)) :#나머지 후보들의 득표수가 rest_list의 max값이 될 때까지 
                    #다솜이 득표수보다 클 경우에만 매수를 해주고 아닐 경우에는 그냥 break 
                    if rest_list[i]>=dasom :
                        rest_list[i]=rest_list[i]-1
                        dasom+=1
                        count+=1 
                    else :
                        break 
print(count)                    