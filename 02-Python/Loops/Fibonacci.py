def fibo(n):
    if n==1 or n==0:
        return n
    else:
        return fibo(n-1)+fibo(n-2)
while True:   
    n=int(input("Enter the number or -1 to exit\n"))
    if n==-1:
        print("Exiting")
        break
    print("fibonacci numbers are\n")
    for i in range(n):
        print(fibo(i),end='\n')    