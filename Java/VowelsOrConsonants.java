import java.util.Scanner;
public class VowelsOrConsonants {
		public static void main(String[] args) {
			char alphabet;
			Scanner scan=new Scanner(System.in);
			System.out.print("Enter an alphabet: ");
			alphabet = scan.next().charAt(0); //getting alphabet
			
			scan.close();
			
			switch(alphabet) {
			case 'A' :
			case 'E' :
			case 'I' :
			case 'O' :
			case 'U' :
			case 'a' :
			case 'e' :
			case 'i' :
			case 'o' :
			case 'u' :
				System.out.println(alphabet+ " is a vowel."); //Printing alpha as vowel.
				break;
			default:
				System.out.println(alphabet+ " is a consonant."); //Printing alpha as consonant.
			}
		}

	}