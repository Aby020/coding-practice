def check_prime(n):
    count, num = 0, 2
    
    while count < n:
        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                break
        else:
            print(num)
            count += 1
        num += 1

n = int(input("Enter the number: "))
check_prime(n)

        

            


