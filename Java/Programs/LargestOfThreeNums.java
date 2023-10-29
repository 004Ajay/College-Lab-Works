    import java.util.*;
	public class LargestOfThreeNums {

		public static void main(String[] args) {
			int num1, num2, num3;
			Scanner scan=new Scanner(System.in);
			System.out.print("Enter three number: ");
			num1 = scan.nextInt(); //getting num1
			num2 = scan.nextInt(); //getting num2
			num3 = scan.nextInt(); //getting num3
			
			scan.close();
			
			if(num1>num2 && num1>num3)
				System.out.println(num1+ " is the largest number"); //Printing num1 as largest
			else if(num2>num1 && num2>num3)
			System.out.println(num2+ " is the largest number"); //Printing num2 as largest
			else if(num3>num1 && num3>num2)
				System.out.println(num3+ " is the largest number"); //Printing num3 as largest
			else if(num1<num2 && num1<num3 && num2 == num3)
				System.out.println("2nd entry " +num2+ " & 3rd entry " +num3+ " are equal");
			else
			    System.out.println("All entries are Equal");
		}

	}
