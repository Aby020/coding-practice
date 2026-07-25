alphabet=input("Enter the alphabet\n")
string=input("Enter a string\n")

count=0

for char in string:
    if char==alphabet:
        count+=1

print(f"The occurence of {alphabet} in this string is {count}")        