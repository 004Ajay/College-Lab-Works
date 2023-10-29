	import java.util.*;
	public class NumPalindrome {

		public static void main(String[] args){
			int num, reversed=0, remainder, original_num;
			Scanner scan=new Scanner(System.in);
			System.out.print("Enter a number: ");
			num = scan.nextInt(); //getting num
			original_num = num;
			
			scan.close();
			
			while (num != 0){
				remainder = num % 10;
				reversed = (reversed * 10) + remainder;
				num /= 10;
			}
			
			if(reversed == original_num)
				System.out.println(original_num+ " is palindrome number"); //Printing num as palindrome
			else
			    System.out.println(original_num+ " is not a palindrome number"); //Printing num is not palindrome
		}
	}