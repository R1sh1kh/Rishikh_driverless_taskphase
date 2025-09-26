class car:
    def __init__(self, brand, year):
        self.brand = brand
        self.year = year

    def __str__(self):
      return f"This  car belongs to {self.brand} made in the year {self.year}"
      
def main():
        car1, car2 = get_car()
        print(car1)
        print(car2)


def get_car():
        brand1=input("Enter brand 1 ")
        brand2 = input("Enter brand 2 ")
        year1 = input("Enter year 1 ")
        year2=input("Enter year 2 ")
        return (car(brand1, year1), car(brand2, year2))
    
if __name__ == "__main__":
        main()
