binary=input("Enter the binary number\n")

decimal=0

for i in binary:
    decimal=decimal*2+int(i)
    
print(f"The decimal equavalent of binary {binary} is {decimal}")    