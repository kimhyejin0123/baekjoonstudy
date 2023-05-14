string =input()

c_list=['c=','c-','dz=','d-','lj','nj','s=','z=']
result=0

for i in c_list:
    result += string.count(i)
    string = string.replace(i, ' ') #크로아티아 알파벳을 찾아내고 나면 
    #다른 알파벳을 찾을 때 중복되지 않게 공백으로 replace 해준다. 
string =string.replace(' ', '')
#공백으로 띄워줬던 것은 다시 공백을 삭제해준다. 
result += len(string) #남아있는 그냥 알파벳들도 전부 count 해야 함 

print(result)