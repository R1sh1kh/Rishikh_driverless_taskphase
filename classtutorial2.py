class Book:
    def __init__(self, title, author, year,copies):
        self.title = title
        self.author = author
        self.year = year
        self.copies = copies


    def __str__(self):
        return f"Title: {self.title}, Author: {self.author}, Year: {self.year}, copies: {self.copies}"
    
    def is_available(self):
        if self.copies != 0:
            return True
        
        else:
            return False
        
    def borrow_book(self):
        if self.is_available():
            self.copies = self.copies -1
        
        else:
            print("Not available")

dict = {}
booklist =[]
def main():
    book = get_book()
    print("BOOKLIST: ")
    for i in book:
        print(i)
    print("BORROWING: ")
    n2 = int(input("Enter number of books to be borrowed"))
    name2 = input("Enter name of borrower")
    for i in range(n2):
            
        
        title2 = input("Enter book title")
        for i in book:

            if title2 == i.title:
                  print(f"{name2} succesfully borrowed {title2}")
                  booklist.append(title2)
                  break

    dict[name2] = booklist
    print(name2, ":", dict[name2])

lst=[]
def get_book():
    n = int(input("Enter number of books"))
    for i in range(n):
        title = input("Enter title")
        author = input("Enter author")
        year = input("Enter year")
        copies = int(input("Enter number of copies"))
        lst.append(Book(title,author,year,copies))

    return lst


if __name__ == "__main__":
    main()

