# Rectangle
l, b = int(input("Enter length of rectangle: ")), int(input("Enter breadth of rectangle: "))
print("Rectangle Area:", (lambda l, b: l * b)(l, b))
print("Rectangle Perimeter:", (lambda l, b: 2 * (l + b))(l, b))

# Square
a = int(input("Enter side of square: "))
print("Square Area:", (lambda a: a * a)(a))
print("Square Perimeter:", (lambda a: 4 * a)(a))
