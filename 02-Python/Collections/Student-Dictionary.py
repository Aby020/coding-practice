student={}

n=int(input("Enter the number of students: "))

for _ in range(n):
    name=input("Enter the name: ")
    age=int(input("Enter the age: "))
    grade=input("ENter the Grade: ")
    
    
    student[name]=(age,grade)
    
print("Student list:",student)    