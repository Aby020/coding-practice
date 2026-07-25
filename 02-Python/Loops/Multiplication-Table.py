num=int(input("Enter the number of multiplication table you need\n"))
end=int(input("Enter the end value\n"))
print("The multiplication table of ",num)
for i in range(1,end+1):
    print(f"{num}*{i}={num*i}")