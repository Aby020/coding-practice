def calculator(num1,operator,num2):
    if operator=='+':
        return num1 + num2
    elif operator=='-':
        return num1-num2
    elif operator=='*':
        return num1*num2
    elif operator=='/':
        if num2 !=0:
         return num1/num2
        else:
            print("Error")
         
    elif operator=='^':
        return num1**num2
    else:
        print("Invalid input\n") 
 
while True:   
    num1=int(input("Enter the first number\n"))
    operator=input("choice the operator \n+,-,*,/,^\n")
    num2=int(input("Enter the second number\n"))
    result=calculator(num1,operator,num2) 
    print(f"The result {num1} {operator} {num2} is {result}")   

    choice=int(input("TO exit the operation enter -1 or to continue 1\n"))
    if choice==-1:
        print("Exiting")
        break
            