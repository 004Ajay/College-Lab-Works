
class Engineer:
    def __init__(self, name, role, salary):
        self.name = name
        self.role = role
        self.salary = salary


E1 = Engineer("Ajay", "Python Programmer", 50000)
E2 = Engineer("Joy", "C Programmer", 70000)

print("\nEngineer List:\n\nName\tJob Role\t\tSalary\n")
print(f"{E1.name}\t{E1.role}\t{E1.salary}\n{E2.name}\t{E2.role}\t\t{E2.salary}\n")