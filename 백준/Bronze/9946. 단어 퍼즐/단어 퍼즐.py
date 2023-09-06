#list() : 파라미터로 들어온 문자열을 원소 단위로 쪼개서 리스트로 저장
#리스트로 쪼갠 것을 똑같이 정렬 해서 반환 sorted  
# 두 A B 를 비교해서 같을 경우 same case 를 출력 

i = 1
 
while True:
    a = input()
    b = input()
    if (a == "END" and b == "END"):
        break
    else:
        A = sorted(list(a))
        B = sorted(list(b))
        
        if A == B:
            print("Case", str(i)+ ": same")
        elif A != B:
            print("Case", str(i)+ ": different")
            
        i += 1