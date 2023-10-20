	import java.util.Scanner;
	public class Sum {

		public static void main(String[] args) {
			int num1, num2;
			Scanner scan=new Scanner(System.in);
			System.out.print("Enter two number: ");
			num1 = scan.nextInt(); //getting num1
			num2 = scan.nextInt(); //getting num2
			
			scan.close();
			
			System.out.print(num1+ " + " +num2+ " = " +(num1+num2)); //Adding & printing sum
		}
	}