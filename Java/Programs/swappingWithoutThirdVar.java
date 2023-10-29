import java.util.Scanner;
public class swappingWithoutThirdVar{
		public static void main(String[] args) {
			int num1, num2;
			Scanner scan=new Scanner(System.in);
			System.out.print("Enter value for num1 & num2:  " );
			num1 = scan.nextInt();
			num2 = scan.nextInt();
			
			scan.close();

            num1 = num1 + num2;
			num2 = num1 - num2;
			num1 = num1 - num2;
			
			System.out.println("");
			System.out.println("Swapping without using third variable 'temp'");
			System.out.println("Before swapping num1: " + num2 + " & num2:  "+num1);
			System.out.println("After swapping num1: " + num1 + " & num2:  "+num2);
    }
}