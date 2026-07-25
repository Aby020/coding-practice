a=float(input("Enter the first number\n"))
b=float(input("Enter the second number\n"))
choice=input("Enter your choice[+,-,*,**,/,//]\n")
if(choice=='+'):
    print(a+b)
elif(choice=='-'):
    print(a-b)    
elif(choice=='*'):
    print("result is ",a*b)   
elif(choice=='**'):
    print(a**b)           
elif(choice=='/'):
    print(a/b)   
elif(choice=='//'):
    print(a//b)   
else:
    print("Invalid input")    