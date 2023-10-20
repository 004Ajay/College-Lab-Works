import java.util.*;
public class CharacterFreq{  
    public static void main(String[] args) {  
       String str = " ";  
       char key;
       int i, freq = 0;  
       Scanner scan = new Scanner(System.in);
       
       System.out.print("Enter the word: ");
       str = scan.nextLine();
       System.out.print("Enter Search Key: ");
       key = scan.next().charAt(0);
       scan.close();

       for(i=0; i <= str.length() - 1; i++){
          if(str.charAt(i) == key) freq++;
    }
       System.out.println("Frequency of " +key+ " in " +str+ " is " +freq);   
       }  
   }    