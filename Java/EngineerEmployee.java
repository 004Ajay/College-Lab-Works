/*
8.1) Write two Java classes Employee and Engineer. Engineer should inherit from Employee class. 
Employee class to have two methods display() and calcSalary(), 
on which calculate Gross Salary of employee is calculated using user inputs and display the 
engineer salary from engineer class(twice of salary of employee), 
Employee class using a single object instantiation (i.e., only one object creation is allowed). 
display() only prints the name of the class and does not return any value. Ex. Name of class is Employee. 
calcSalary() in Employee displays- Salary of employee is 10000 and calcSalary() in 
Engineer displays Salary of Engineer as twice of salary of employee
*/

import java.util.*;
class Employee {
int BasicSalary, DA, TA, GrossSalary;
Employee(int BasicSalary, int DA, int TA) {
       this.BasicSalary = BasicSalary;
       this.DA = DA;
       this.TA = TA;
       GrossSalary = BasicSalary+DA+TA; //calculating Gross salary
       System.out.print("Employee Salary: "+GrossSalary);
   }
void display() {
   System.out.print("\nName of the class is 'Employee'");
   }
}
class Engineer extends Employee {
   Engineer(int BasicSalary, int DA, int TA) {
   super(BasicSalary, DA, TA);
   }
void display() {
       System.out.print("\nName of the class is 'Engineer'");
   }
void calcSalary() {
     System.out.print("\nEngineer Salary: "+(2*(BasicSalary+DA+TA)));
     super.display();
   }
}
public class EngineerEmployee  {
   public static void main(String[] args) { 
       int BasicSalary, DA, TA;
		Scanner scan = new Scanner(System.in);
		System.out.print("Enter Basic Salary: ");
		BasicSalary = scan.nextInt();
		System.out.print("Enter DA: ");
		DA= scan.nextInt();
		System.out.print("Enter TA: ");
		TA = scan.nextInt();
		Engineer eng1 = new Engineer(BasicSalary, DA, TA);
		eng1.calcSalary();
		eng1.display();
		scan.close();
   }
}