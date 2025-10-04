import math
coordinates = [(4,3), (2,1), (8,3)]
x = int(input("Enter x coordinate of reference point"))
y = int(input("Enter y coordinate of refrence point"))

def dist(coordinate):
    x1,y1=coordinate
    x1 = int(x1)
    y1 = int(y1)
    return math.sqrt((x-x1)**2+(y-y1)**2)
    


def sort():
    n = len(coordinates)
    for i in range(n-1):
        min_index = i
        for j in range(i+1, n):
            if dist(coordinates[j]) < dist(coordinates[min_index]):
                min_index = j
        coordinates[min_index], coordinates[i] = coordinates[i], coordinates[min_index]

def printy():
    for i in coordinates:
        print(i, end ="")

sort()
printy()


         
       
         

         

         