def string(s):
    s_rev=s[::1]
    
    return s==s_rev
while True:
    s=input("Enter the string value or Enter 'exit' for exit\n")
    
    if s=='exit':
        print("exiting")
        break
    
    if string(s):
        print(f"The string '{s}' is palindrome")
    else:
         print(f"The string '{s}' is not palindrome")
            
                
        
    
    