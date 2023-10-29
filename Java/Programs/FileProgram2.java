/*
Write a Java program that read LINE OF TEXT from a file and write the same to file using FileOutputStream
 and FileInputStream by handling all file related exceptions
*/

import java.io.*;

public class FileProgram2{
	public static void main(String[] args) throws IOException{
	File file1 = new File("new2.txt");
	if( file1.exists() ){
		System.out.println("Exists");
	}
	else{
		file1.createNewFile();
		System.out.println("file created");
	}
	try{
	 FileOutputStream fileOut = new FileOutputStream("new2.txt",true);
	 BufferedReader buff = new BufferedReader(new InputStreamReader(System.in));
	 System.out.print("Enter Data: ");
	 String s = buff.readLine();
	 byte[] arr = s.getBytes();
	 fileOut.write(arr);
	    System.out.print("Data Added: ");
	 fileOut.close();
	 }
	catch(Exception e){
		System.out.println("File not found");
	}
	int i=0;
	FileInputStream file2 = new FileInputStream("new2.txt");
	System.out.println(file2.available());
	while( (i=file2.read()) != -1){
		char c= (char) i;
		System.out.print(c);
	}
	file2.close();
  }
}
