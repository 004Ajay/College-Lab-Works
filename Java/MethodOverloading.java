/*
Write a Java program to calculate the area of different shapes namely circle, rectangle, and triangle 
using the concept of method overloading.
*/

class Overloader{
    void area(double x){
        System.out.println("Area of the circle: "+ (3.14*x*x));
    }
    void area(int x, int y){
        System.out.println("Area of the rectangle: "+ (x*y));
    }
    void area(float x, float y){
        System.out.println("Area of the triangle: " +(0.5*x*y));
    }
}

public class MethodOverloading{
     public static void main(String args[]){
       Overloader object = new Overloader();
	   object.area(2);
	   object.area(2, 10);
	   object.area(6, 4);
        }
}