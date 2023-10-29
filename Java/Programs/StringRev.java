	import java.util.*;
	public class StringRev {

	public static void main(String[] args) {
	String word, reversed= "";
	int len, i;
	Scanner scan=new Scanner(System.in);
	System.out.print("Enter a word:  ");
	word = scan.nextLine(); //getting string
	
	scan.close();

	len = word.length();
	for(i= len-1; i>=0; i-- )
	reversed = reversed + word.charAt(i); //reversing the string

	System.out.println("\n\nOriginal Word: "+word);
	System.out.println("Reversed Word: "+reversed);
	}
	}