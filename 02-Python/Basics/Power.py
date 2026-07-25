def power(base,exponent):
    if exponent==0:
        return 1
    elif exponent==1:
        return base
    else:
        return base*power(base,exponent-1)
while True:
    
        
    base=int(input("Enter the Basee\n"))
    exponent=int(input("Enter the exponent\n"))
    result=power(base,exponent)
    print(f"The power of {base} and {exponent} is {result}")    
    n=int(input("Enter -1 to exi\n"))
    if(n==-1):
        print("Exiting")
        break
        