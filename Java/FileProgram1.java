/*
Write a Java program to enter n numbers from keyboard to a file using FileOutputStream class
and displaying the contents from num.txt using FileInputStream class
*/

import java.io.*;
import java.util.Scanner;

public class FileProgram1{

	public static void main(String[] args)throws IOException {
	File file1 = new File("num1.txt");
	if( file1.exists() ){
		System.out.println("exists");
	}
	else{
		file1.createNewFile();
		System.out.println("file created");
	}
	FileOutputStream fileOut = new FileOutputStream("num1.txt");
	Scanner scan = new Scanner(System.in);
	System.out.print("No of elements:");
	int elements = scan.nextInt();
	for(int i=1; i <= elements; i++){
		System.out.print("Enter the number"+i+":");
		int num = scan.nextInt();
		fileOut.write(num);
	}
	scan.close();
	fileOut.close();
	int i=0;
	FileInputStream file2 = new FileInputStream("num1.txt");
	while( (i=file2.read()) != -1 )
		     System.out.print( i + "\t");
	file2.close();	
  }
}