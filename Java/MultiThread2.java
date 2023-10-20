/*
Write a Java program that displays consecutive five integers 
and consecutive five characters using multi-threading join method 
*/

class Thread1 extends Thread{
	public void run() {
		for(int i=1;i<=5;i++) {
			System.out.println(i);
			try {
				Thread.sleep(400);
			}
			catch(Exception e){
				System.out.println(e);
			}
		}
	}
}
class Thread2  extends Thread{
	public void run() {
		for(char i='a'; i <= 'e'; i++) {
			System.out.println(i);
			try {
				Thread.sleep(400);
			}
			catch(Exception e){
				System.out.println(e);
			}
		}
	}
}
public class MultiThread2 {
	public static void main(String[] args) {
        Thread2 th1 =new Thread2();
		Thread1 th2 =new Thread1();
			try {
			    th1.start();
			    th2.start();
			    th1.join();
			    th2.join();
		   }
		    catch(Exception e) {
			   System.out.println(e);
		   }
	}
}
