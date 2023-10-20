//class ANIMAL
abstract class Animal{
    protected int legs;
    protected Animal(int legs){
        this.legs = legs;
    }
    abstract void eat();
    public void walk(){
        System.out.print("\nThis animal walks by "+legs+" legs");
    }
}

//class SPIDER
class Spider extends Animal{
    Spider(){
        super(8);
    }
    public void eat(){
        System.out.print("\nSpider eats insects");
    }
}
//----------------------------------------------------------------------------------------------------------//
//interface PET
interface Pet{
    abstract String getName();
    abstract void setName(String name);
}
//----------------------------------------------------------------------------------------------------------//
//class CAT
class Cat extends Animal implements Pet{
    String name;
    Cat(String name){
        super(4);
        this.name = name;
    }
    public void eat(){
        System.out.print("\nCat eats fish");
    }
    public String getName(){
        return name;
    }
    public void setName(String name){
        this.name = name;
    }
}
//----------------------------------------------------------------------------------------------------------//
//class FISH
class Fish extends Animal implements Pet{
    String name;
    Fish(String name){
        super(0);
        this.name = name;
    }
    public void eat(){
        System.out.print("\nFish eats plants");
    }
    public String getName(){
        return name;
    }
    public void setName(String name){
        this.name = name;
    }
    public void walk(){
        System.out.print("\nFish has no legs");
    }
}
//----------------------------------------------------------------------------------------------------------//
//MAIN class
public class InterfaceInheritance{
    public static void main(String[] args) {
        System.out.print("FISH");
        String name;
        //For FISH
        name = "Mimi";
        Fish fishes = new Fish(name);
        System.out.print("\nThis fish's name is "+fishes.getName());
        fishes.eat();
        fishes.walk();
        
        //for CAT
        System.out.print("\n\nCAT");
        name = "MiMi";
        Cat cats = new Cat(name);
        System.out.print("\nThis cat's name "+cats.getName());
        cats.walk();
        cats.eat();
        cats.setName("Mouse");
        System.out.print("\nThis cat's name "+cats.getName());
        
        //for SPIDER
        System.out.print("\n\nSPIDER");
        Spider spy = new Spider();
        spy.eat();
        spy.walk();
    }
}