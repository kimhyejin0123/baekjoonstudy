
N = str(input())

array = []
for i in N :
    array.append(int(i))

array.sort(reverse = True)

for j in array :
    print(j, end='')
   