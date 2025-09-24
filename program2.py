class Sort:
    def __init__(self,strings):
        self.strings =strings

    def sorting(self):
        n2 = len(self.strings)

        for i in range(n2):
            min_index = i
            for j in range( i+1, n2):
                if self.strings[j]<self.strings[min_index]:
                    min_index = j
            self.strings[i], self.strings[min_index] = self.strings[min_index], self.strings[i]

        return self.strings



def main():
    sort = get_string()
    sort.sorting()
    print("sorted data is :")
    for i in range(len(sort.strings)):
        
        print(sort.strings[i])

lst = []
def get_string():
    n = int(input("Enter number of strings"))
    for i in range(n):
        string = input("Enter string")
        lst.append(string)
    return Sort(lst)


if __name__=="__main__":
    main()
