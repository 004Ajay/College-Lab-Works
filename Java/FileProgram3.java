/*
Write a file handling program in Java to read and write text content with reader/writer
*/

import java.io.*;

public class FileProgram3 {
	public static void main(String[] args)throws IOException {
		File file1 =new File("new3.txt");
		if(file1.exists()){
			System.out.println("file already exists");
		}
		else{
			file1.createNewFile();
			System.out.println("file created");
		}
		FileWriter fileOut=new FileWriter("new3.txt", true);
		  BufferedReader buff = new BufferedReader(new InputStreamReader(System.in));
		  System.out.print("Enter Data: ");
		       String buffer=buff.readLine();
		       fileOut.write(buffer + "");
		       
		  System.out.println("Content Added");
		  fileOut.close();
		  FileReader fileRead =new FileReader("new3.txt");
		  BufferedReader buff1=new BufferedReader(fileRead);
		  String s;
		  while((s = buff1.readLine()) != null){
			  System.out.println(s);
		  }
		  fileRead.close();
	
		  }


	}