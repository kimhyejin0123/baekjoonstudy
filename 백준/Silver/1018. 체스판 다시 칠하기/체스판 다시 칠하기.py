N, M = map(int, input().split())
board = [] #원래 보드
count = [] #새로 칠해야 하는 정사각형의 개수 

for s in range(N):
    board.append(input())

for row in range(N-7): #시작행
    for column in range(M-7): #시작열 
        index1 = 0 #W로 시작할 때 새로 칠해야 하는 개수 
        index2 = 0 #B로 시작할 때 새로 칠해야 하는 개수
        for i in range(row, row+8): #체스판이 8*8 고정이므로 8번 반복 
            for j in range(column, column+8):
                #행과 열 인덱스의 합이 짝수이면 시작점의 색깔과 같아야 한다. 
                #따라서 흰색이 아닐 경우에는 index1에 1을 더하고, 
                #검은색이 아닐 경우에는 index2에 더한다. 
                if (i+j) % 2 == 0:
                    if board[i][j] != 'W':
                        index1 += 1 
                    if board[i][j] != 'B':
                        index2 += 1 
                else :
                    #행과 열 인덱스의 합이 홀수일 경우에는 시작점의 색깔과 달라야 한다. 
                    if board[i][j] != 'B':
                        index1 += 1
                    if board[i][j] != 'W':
                        index2 += 1 
        count.append(min(index1, index2))
print(min(count))
