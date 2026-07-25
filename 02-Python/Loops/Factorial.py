def fact(n):
    if n==0 or n==1:
     return 1
    else:
        return n*fact(n-1)

while True:    

    n=int(input("Enter the number or -1 to exit\n"))
    if n==-1:
        print("Exiting")
        break

    result=fact(n)

    print(f"The factorial of number {n} is {result}")
    
    
        