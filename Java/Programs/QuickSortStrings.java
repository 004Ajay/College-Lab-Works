/*
Write a Java program that implements Quick sort algorithm for sorting a list of names in ascending order
*/

import java.util.Scanner;
public class QuickSortStrings{
public static void main(String[] args){
    
int limit;
String temp;
Scanner NumScan = new Scanner(System.in);
Scanner NameScan = new Scanner(System.in);

System.out.print("Enter limit: ");
limit = NumScan.nextInt();

String names[] = new String[limit];
System.out.println("Enter names: ");
for(int i = 0; i < limit; i++) names[i] = NameScan.nextLine();   

NameScan.close();
NumScan.close();  

for (int i = 0; i < limit; i++){
    for (int j = i + 1; j < limit; j++){
        if (names[i].compareTo(names[j])>0){
            temp = names[i];
            names[i] = names[j];
            names[j] = temp;
        }
    }
}

System.out.print("Sorted list: ");
for (int i = 0; i < limit; i++)
    System.out.print(names[i] + "  ");
    }
}  