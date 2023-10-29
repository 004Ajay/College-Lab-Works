/*
Write a Java program that shows multiplication table of 3 integers
using thread synchronization concept (you can decide the range of multiplication table)
*/

import java.util.*;

class Multiply{
	void print(int n){
		synchronized(this){
			 for (int i = 1; i <= 5; i++){
				 System.out.println(n + "*"+i+ "="+(i * n));
				 
				 try {
					 Thread.sleep(100);
				 }
				 catch(Exception e) {
					 System.out.println(e);
				  }
			 }
		}
	 }
}
class Table extends Thread{
	Multiply multi;
	int num1;
	Table(Multiply multiple, int num){
		multi = multiple;
		num1 = num;
	}
	 public void run(){
	 multi.print(num1); 
	 }
}
public class MultiThread1 {
	public static void main(String args[]) {
		Scanner scan = new Scanner(System.in);
		Multiply multiple = new Multiply();
		
		System.out.print("Enter the table you want to run by thread1: ");
		int num = scan.nextInt();
		Table table1 = new Table(multiple, num);
		
		System.out.print("Enter the table you want to run by thread1: ");
		num = scan.nextInt();
		Table table2 = new Table(multiple, num);
		
		System.out.print("Enter the table you want to run by thread1: ");
		num = scan.nextInt();
		Table table3 = new Table(multiple, num);
		
		table1.start();
		table2.start();
		table3.start();
		scan.close();
		
	}

}
