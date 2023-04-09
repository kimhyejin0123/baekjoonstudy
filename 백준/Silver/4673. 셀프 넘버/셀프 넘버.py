def create_range():
    new_list = []
    for i in range(10000):
        new_list.append(i + 1)
    return(new_list)

def self_num(a = []): #a=10000까지의 리스트가 들어갈 예정
    not_self_num_list = []
    for i in a:
        find_i = i + (i // 10000) + (i// 1000) + ((i % 1000) // 100) + ((i % 100)// 10) + (i % 10)
        if a.count(find_i) >= 1: #count함수:문자를 찾아 개수를 세줌
            not_self_num_list.append(find_i)
    self_num_list = list(set(a) - set(not_self_num_list))
    return(self_num_list)

#sorted_list = []
sorted_list = self_num(create_range())
sorted_list.sort()

for i in sorted_list :
    print(i)
