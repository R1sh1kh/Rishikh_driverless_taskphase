from sort import Sorts

class Binary:
    def __init__(self, strings):
        self.strings = strings

    @classmethod
    def get_strings(cls, n):
        lst = []
        for i in range(n):
            string = input(f"Enter string: ")
            lst.append(string)
        return cls(lst)

    def binary_search(self, target):
        
        sorter = Sorts(self.strings)
        self.strings = sorter.sort(len(self.strings))

       
        low = 0
        high = len(self.strings) - 1
        while low <= high:
            mid = (low + high) // 2
            if self.strings[mid] == target:
                print("Target found")
                return
            elif self.strings[mid] < target:
                low = mid + 1
            else:
                high = mid - 1
        print("Target not found")



n = int(input("Enter number of elements in array: "))
binary_obj = Binary.get_strings(n)
target = input("Enter target string: ")
binary_obj.binary_search(target)

