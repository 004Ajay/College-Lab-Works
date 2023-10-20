import java.util.*;
public class StringFreq{  
    public static void main(String[] args) {  
       String str = " ";  
       int i, j;  
       Scanner scan = new Scanner(System.in);
       
       System.out.print("Enter the word: ");
       str = scan.nextLine();

       int[] freq = new int[str.length()];
    
       char string[] = str.toCharArray();  
         
       for(i = 0; i <str.length(); i++) {  
           freq[i] = 1;  
           for(j = i+1; j <str.length(); j++) {  
               if(string[i] == string[j]) {  
                   freq[i]++;  
                     
                   string[j] = '0';  
               }  
           }  
       }  
        
       System.out.println("Characters & Frequencies:");  
       for(i = 0; i <freq.length; i++) {  
           if(string[i] != ' ' && string[i] != '0')  
               System.out.println(string[i] + " - " + freq[i]);  
       }  
   }  
}  