	import java.util.Scanner;

	public class OddEven {

		public static void main(String[] args) {
			int num;
			Scanner scan=new Scanner(System.in);
			System.out.print("Enter a number: ");
			num = scan.nextInt(); //getting num
			
			scan.close();
			
			if(num % 2 == 0)
				System.out.println(num+ " is an even number."); //Printing num1 as largest
			else if(num % 2 != 0)
			System.out.println(num+ " is an odd number."); //Printing num2 as largest
			else
			    System.out.println("Wrong Input! Try again.");
		}

	}