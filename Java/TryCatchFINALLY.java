import java.util.Scanner;
public class TryCatchFINALLY {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
	      int num1, num2, result;
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
	      catch (ArithmeticException div) {
	         System.out.println ("Exception Thrown: " + div);
	      }
	      finally {
		    	System.out.print("From finally block: Result published!\n");
		    }
	}

}