class Jar:
    def __init__(self, capacity = 12):
        self.capacity = capacity
        self._size=0
        if self.capacity < 0 and type(self.capacity) != int :
            raise ValueError

    
    
    def deposit(self, n):
        self._size += n
        if self._size > self.capacity:
            raise ValueError
        
    def withdraw(self, n):
        if n > self._size:
            raise ValueError
        self._size -= n

    def cap(self):
        return self.capacity
    
    @property
    def size(self):
        return self._size
    
    def __str__(self):
        return "🍪"*self._size

jar = Jar()
n = int(input("Enter cookies to be added"))
jar.deposit(n)
m = int(input("Enter cookies to be removed"))
jar.withdraw(m)
print ( jar )
print(jar.cap())
print(jar.size)

