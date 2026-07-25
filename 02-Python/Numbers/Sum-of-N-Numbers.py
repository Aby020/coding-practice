def find_sum(n):
    sum=0
    for i in range(1,n+1):
        sum+=i
    return sum

n=int(input("enter the number\n")) 
result=find_sum(n)
print(f"The sum of {n} is {result}")



