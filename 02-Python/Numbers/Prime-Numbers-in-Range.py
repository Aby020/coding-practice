def check_prime(num):
    if num<2:
        return False
    else:
        for i in range(2,int(num**0.5)+1):
            if num % i==0:
                return False
        return True
def print_prime(start,end):
    for num in range(start,end):
        if check_prime(num):
            print(num)
start=int(input("Enter the start range\n"))   
end=int(input("Enter the end range\n"))  

print(f"Number between range {start} and {end}")
print_prime(start,end)