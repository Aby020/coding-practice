def exchange(s):
    if len(s)<=1:
        return s
    else:
        return s[-1]+s[1:-1]+s[0]
   
string=input("ENter the string\n") 
result=exchange(string)
print(f"The result after swappping is {result}")   