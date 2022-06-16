# OOP- Object oriented programming
a=5
print(f"what is {a}, this is 5") #f-string
'''Classes-Template
object-instance of class
DRY- Do not Repeat Yourself

'''
class Student:
    leaves=10 #class variable cannot be overwrite

    pass
harry=Student()
larry=Student()
# Both Harry and Larry are different

larry.leaves=9 #instance variable makes new instance
print(harry.leaves)
print(larry.leaves)
print(Student.leaves)
print(larry.__dict__)   #gives dict of everything about person



