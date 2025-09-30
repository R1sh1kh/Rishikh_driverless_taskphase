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
        
        if len(hash_table[index]) == 0:
            hash_table[index].append(key)
            continue
        low = 0
        high =len(hash_table[index])-1
        
        while low <= high:
            mid = (low+high)//2

            if hash_table[index][mid] > key:
                high = mid-1

            else:
                low =mid+1
        
        hash_table[index].insert(low, key)
        
insert()
for i in range(table_size):
    print("Bucket",i+1,":", hash_table[i])



