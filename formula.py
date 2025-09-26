n= int(input("Enter number"))
count = 0
lst =[]
dict={}
for i in range(n):
    string = input("Enter string")
    lst.append(string)

alphabets = ["a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"]
for i in alphabets:
    
    count =0
    for word in lst:
        for letter in word:
            if letter == i:
                count = count + 1
    dict[i]= count

for j in dict:
    print( j, ":", dict[j])
    


