class Sorts:
    def __init__(self, strings):
        self.strings = strings

    @classmethod
    def get_string(cls,n):
        lst=[]

        for i in range(n):
            string = input("Enter string ")
            lst.append(string)

        return cls(lst)
    
    def sort(self,n):
        for i in range(n):
            min_index= i
            for j in range (i+1, n):
                if self.strings[j]<self.strings[min_index]:
                    min_index = j
            self.strings[i], self.strings[min_index]= self.strings[min_index],self.strings[i]

        
        return self.strings
    def printy(self,n):
        for i in range(n):

            print(self.strings)

def main():
    n = int(input("Enter number of elements of array: "))
    obj = Sorts.get_string(n)
    obj.sort(n)
    obj.printy(n)

if __name__ == "__main__":
    main()



