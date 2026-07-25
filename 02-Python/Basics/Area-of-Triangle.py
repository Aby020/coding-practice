a=int(input("Enter the side 1\n"))

b=int(input("Enter the side 2\n"))

c=int(input("Enter the side 3\n"))

s=(a+b+c)/2

Area=(s*(s-a)*(s-b)*(s-c))**0.5

print(f"Area of triangle is {Area}")