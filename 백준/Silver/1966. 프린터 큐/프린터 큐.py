from collections import deque
import sys

T = int(input())

for _ in range(T):
    N, M = map(int, input().split())
    queue = deque(list(map(int, sys.stdin.readline().split())))
    count = 0
    while True:
        best = max(queue)
        front = queue.popleft() #맨 왼쪽에 있는 값을 pop
        M -= 1 #front를 하나 뺐으므로 위치 M이 하나 작아진다. 

        if best == front: # front가 중요도가 가장 큰 숫자라면 
            count += 1 #적합한 것이므로 순서 count에 1을 더한다. 
            if M < 0: # M이 0일 때만 해당 if문이 작동하는데, M이 0인 것은 front를 
                    #바로 뽑은 것이므로 바로 count를 출력하고 while문을 종료한다. 
                print(count)
                break

        else:
            queue.append(front) # 제일 뒤로 밀려난다. 
            if M < 0 :  # M이 0일 때만 작동하지만 중요도가 적합하지 않으므로 단순히 위치를 
                # 제일 뒤로 옮겨주고 종료한다. 
                M = len(queue) - 1 # 제일 뒤로 이동

