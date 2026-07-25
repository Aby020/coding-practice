class Rectangle:
    def __init__(self, l, b):
        self.l, self.b = l, b

    def area(self):
        return self.l * self.b

    def perimeter(self):
        return 2 * (self.l + self.b)

# User input and result display
rect = Rectangle(int(input("Enter length of rectangle: ")), int(input("Enter breadth of rectangle: ")))
print("Area of rectangle:", rect.area())
print("Perimeter of rectangle:", rect.perimeter())
