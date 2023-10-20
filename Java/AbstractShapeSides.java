/*
6) Write a java program to create an abstract class named Shape that contains an empty method named numberOfSides( ).
Provide three classes named Rectangle, Triangle & Hexagon such that each one of the classes extends the class Shape. 
Each one of the classes contains only the method numberOfSides( ) that shows the 
number of sides in the given geometrical structures. (Exercise to understand polymorphism)
 */
abstract class Shape{
abstract void numberOfSides( );
}
class Rectangle extends Shape{
void numberOfSides( ){
		System.out.println("I am Recatangle, I have 4 sides.");
	}
}
class Triangle extends Shape{
	void numberOfSides( ){
		System.out.println("I am Triangle, I have 3 sides.");
	}	
}
class Hexagon extends Shape{
	void numberOfSides( ){
		System.out.println("I am Hexagon, I have 6 sides.");
	}	
}
public class AbstractShapeSides{
	public static void  main(String[] args) {
	    Rectangle Rect = new Rectangle();
	    Rect.numberOfSides();
		Triangle Tri = new Triangle();
	    Tri.numberOfSides();
	    Hexagon Hex = new Hexagon();
	    Hex.numberOfSides();
	}
}