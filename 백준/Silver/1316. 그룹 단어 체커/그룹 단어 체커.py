n= int(input())
lst=[]

for i in range(n):
    a =list(input()) #입력받은 수 하나에 대하여 바로 수행 
    for j in range(len(a)-1):
        if a[j]==a[j+1]: #그 알파벳이 그 다음 것과도 같다면 계속 수행 
            pass
        elif a[j] in a[j+2:]: #만약 알파벳이 한칸 띄워진 이후에 또 있다면,
            n-=1 #연속된 문자가 아니므로 총 개수 n에서 하나를 삭제하고
            break #for문을 나옴 
#최종 n의 값을 출력함 
print(n)