def solution(numbers):
    num_list = []
    for i in numbers :
        num_list.append(str(i))
    
    num_list.sort(key = lambda x:x*3, reverse=True)
    
    answer = ''
    answer = answer.join(num_list)
    return str(int(answer))