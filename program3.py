from program2 import Sort
class Search:
    def __init__(self, strings):
        self.strings = strings


    def binary(self):
        sorter = Sort(self.strings)
        self.strings=sorter.sorting() #updating attribute
        
        target = input("Enter string to search ")
        low = 0
        found = 0
        high = len(self.strings)-1
        while low<= high:
            mid = (low+high)// 2

            if self.strings[mid] == target:
                found = 1
                break

            elif self.strings[mid]<target:
                low = mid+1
            elif self.strings[mid]>target:
                high = mid-1

        if found != 0:
            print(f"{target} Found")

        else:
            print(f"{target} not found")



def main():
    search = get_string()
    search.binary()


def get_string():
    lst=[]
    n = int(input("Enter number of strings "))
    for i in range(n):
        string = input("Enter string ")
        lst.append(string)

    return Search(lst)


if __name__ == "__main__":
    main()