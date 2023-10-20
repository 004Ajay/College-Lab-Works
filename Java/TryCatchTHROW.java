import java.util.Scanner;

public class TryCatchTHROW {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
	    int num1, num2, result;
	    char choice;
	    do { 
	    System.out.print("Program to perform division\n");
	    System.out.print("Enter num1: ");
	    num1 = scan.nextInt();
	    System.out.print("Enter num2: ");
	    num2 = scan.nextInt();
	    
	    scan.close();
	    
	    try{
	        result = num1/num2;
	        System.out.println("The result is " +result);
	    }
	    catch(Exception e) {
	    	 System.out.println(e.getMessage());
	    }
	  	  System.out.print("Do you want to continue? y/n\n");
	  	  choice = scan.next().charAt(0);
	  	  }while(choice == 'Y' || choice == 'y');
	    System.out.print("Exited!");
	      }
}