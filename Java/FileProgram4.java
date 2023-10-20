/*
Write a Java program that reads a line of integers, and then displays each integer
*/

import java.io.*;
import java.util.*;

public class FileProgram4{
	public static void main(String[] args) throws IOException{
	  Scanner scan = new Scanner(System.in);
	  int i, elements;
	  File file1 = new File("new4.txt");
	  
	   if(file1.exists()) System.out.println("File Exists");
	   else { 
		   file1.createNewFile(); 
		   System.out.println("File Created\n"); 
		   }
	   
	   FileWriter FileOut = new FileWriter("new4.txt");
	   System.out.print("\nEnter number of elements: ");
	   elements = scan.nextInt();
	   //scan.close();
	   BufferedReader Buffs = new BufferedReader(new InputStreamReader(System.in));
	   for(i=0; i < elements; i++){
			System.out.print("\nEnter the number " + (i+1) + ": ");
			String read = Buffs.readLine();
			FileOut.write(read+" ");
			FileOut.close();
			scan.close();
	   }
	   //scan.close();
	   System.out.print("\nContent Added");
		FileReader file = new FileReader("new4.txt");
		BufferedReader Buff = new BufferedReader(file);
		String s;
		System.out.print("\n\nThe elements are: ");
		while( (s = Buff.readLine()) != null)
		          System.out.print(s); 
		file.close();
	 }
 }