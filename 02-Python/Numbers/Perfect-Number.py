def perfect(num):
    sum=0
    for i in range(1,num):
        if num %i==0:
            sum+=i
    return sum==num    

while True:
    num=int(input("Enter the number to check it is perfect or not or -1 to Exit\n"))
    if num==-1:
        print("Exiting program")
        break
    if perfect(num):
        print(f"The number {num} is perfect")
    else:
         print(f"The number {num} is not perfect")
            







        

