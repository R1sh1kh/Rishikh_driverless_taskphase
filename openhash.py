n = int(input("Enter number of integers "))
lst = []


for i in range (n):
    num = int(input("Enter integer "))
    lst.append(num)

table_size = 10
hash_table = [[]for _ in range (table_size)]

def hash_function(key):
    return key % 10
    


def insert():
    for i in range (n):
        key = lst[i]
        index = hash_function(key)
        if key in hash_table[index]:
            continue
        hash_table[index].append(key)
        index = index+1
        print(f"Bucket {index} : {key}") # 4th index is 5th bucket.


insert()




            


