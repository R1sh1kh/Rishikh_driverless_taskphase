import csv

with open("names.csv", "r") as f:
    reader = list(csv.reader(f))
     ## remember to convert it to list first.
#dont forget to save csv file or the contents wont be imported
count = 0
for row in reader:
        count += 1
n = count
def sorty():
    
    for i in range(1, n-1):
        min_index = i
        for j in range(i+1,n):
            if int(reader[min_index][1]) > int(reader[j][1]):
                    min_index = j
        reader[min_index], reader[i] = reader[i], reader[min_index]
    print("On sorting:\n")
    for row in reader:
          print(row)
    print("\n")

sorty()

def stringy():
    strg =""
    for i in range(1, n):
          strg = strg + reader[i][0]

    print(strg.lower())
    min_dif = 53

    for i in range(len(strg)):
        for j in range(i+1,len(strg)):
              if abs(int(ord(strg[i])-ord(strg[j]))) < min_dif:
                   min_dif = abs(int(ord(strg[i])-ord(strg[j])))

    print("The minimum absolute ASCII difference is", min_dif ,"\n")

stringy()
                   

def odd():

    for i in range(1,n):
         if i%2!=0:
             del reader[i][0]
             del reader[i][0]
    print("On deleting odd rows:\n")
    for row in reader:
         print(row)
              
odd()
          

              
     
    


    