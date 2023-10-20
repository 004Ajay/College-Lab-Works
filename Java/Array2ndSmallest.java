import java.util.Arrays;
public class Array2ndSmallest {
public static void main(String[] args) {
int[] array = {1, 4, 7, 3, 6, 10};
Arrays.sort(array);  
System.out.println("2nd smallest array element is " +array[1]);
    }
}

/*
Java program to get array from user & find the second smallest element of it.

import java.util.Scanner;
public class DefaultRough{
    public static void main(String args[]){  
    Scanner scan = new Scanner(System.in);
    int limit, i, temp;
    int array[] = new int[10];
    
    System.out.println("Enter array limit: ");
    limit = scan.nextInt();

    System.out.println("Enter array limit: ");
    for(i = 0; i < limit; i++)
       array[i] = scan.nextInt();

    scan.close();

    for (i = 0; i < limit; i++){  
                if (array[i] > array[i + 1]){  
                    
                    temp = array[i];  
                    array[i] = array[i + 1];  
                    array[i + 1] = temp;  
                    
                }  
            }  
System.out.println("Second smallest element: "+array[1]);  
   }
 }  
 */