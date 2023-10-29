import java.util.*;
public class StringPalindrome{
    public static void main(String[] args){
        String character, char_copy, reversed = "";
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter a word: ");
        character = scan.nextLine();
        char_copy = character;
        
        scan.close();
        
        for(int i = character.length() - 1; i >= 0; i--){
            reversed = reversed + character.charAt(i);
        }

        if(character.equals(reversed)){
            System.out.println(char_copy+ " is a palindrome word");
        }
        else
            System.out.println(char_copy+ " is not a palindrome word");
    }
}