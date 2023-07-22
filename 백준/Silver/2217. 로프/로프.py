N = int(input())
ropes = []

for i in range(N):
    ropes.append(int(input()))

ropes.sort()

result = []
for j in ropes:
    result.append(j*N)
    N -= 1 
print(max(result))
