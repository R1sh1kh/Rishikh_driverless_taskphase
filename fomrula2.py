n = int(input("Enter number of strings: "))
lst = []
dict={}
count = 1
for i in range(n):
    string = input("Enter string")
    string.lower()
    lst.append(string)

for word in lst:
    for letter in word:
        if letter in dict:
           
            dict[letter] = dict[letter] + 1

        else :
            dict [letter] = 1

for word in lst:
    for letter in word:
        print( letter, ":", dict[letter])



