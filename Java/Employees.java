/*
7) Write a Java program which creates a class named 'Employee' having the following members:
Name, Age, Phone number, Address, Salary. It also has a method named 'printSalary( )' which prints the salary of the Employee. 
Two classes 'Officer' and 'Manager' inherits the 'Employee' class. 
The 'Officer' and 'Manager' classes have data members 'specialization' and 'department' respectively. 
Now, assign name, age, phone number, address and salary to an officer 
and a manager by making an object of both of these classes and print the same. 
(Exercise to understand inheritance).
 */
import java.util.*;

class Employeer{
  String name, PhoneNumber, address;
  int age, salary;
  void GetDetails(){
  Scanner  scan = new Scanner(System.in);
		System.out.print("\nEnter name: ");
		name = scan.next();
		System.out.print("\nEnter age: ");
		age = scan.nextInt();
		System.out.print("\nEnter phone number: ");
		PhoneNumber = scan.next();
		System.out.print("\nEnter address: ");
		address = scan.next();
		System.out.print("\nEnter salary: ");
		salary = scan.nextInt();
		scan.close();
        }
  void PrintDetails(){
		System.out.print("\nName: "+ name);
		System.out.print("\nAge: "+age);
		System.out.print("\nPhone number: "+PhoneNumber);
		System.out.print("\nAddress: "+address);
		System.out.print("\nSalary: "+salary);
        }
}  
//Class Officer.	
class officer extends Employeer{
	String specialization;
	
  void GetDetails() {
      Scanner  scan = new Scanner(System.in);
      System.out.print("\nEnter Specialization: ");
      specialization = scan.nextLine();
      super.GetDetails();
      scan.close();
}
  void PrintDetails() {
      super.PrintDetails();
      System.out.print("\nSpecialization: " +specialization);
}
}
//Class Manager.
class manager extends Employeer{
	String department;
	
  void GetDetails() {
      Scanner  scan = new Scanner(System.in);
      System.out.print("\nEnter Department: ");
      department = scan.nextLine();
      super.GetDetails();
      scan.close();
}
  void PrintDetails() {
      super.PrintDetails();
      System.out.print("\nDepartment: " +department);
}
}
//Main Class
public class Employees{
  public static void main(String[] args) {
      officer officer1 = new officer();
      manager manager1 = new manager();
      
      System.out.print("Enter Officer details\n");
      officer1.GetDetails();
      System.out.print("\nEnter Manager details\n");
      manager1.GetDetails();
      System.out.print("\nDetails of Officer");
      officer1.PrintDetails();
      System.out.print("\n\nDetails of Manager");
      manager1.PrintDetails();
  }
}