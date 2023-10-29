/*
Write a Java program for handling key events
*/

import java.awt.*;    
import java.awt.event.*;    
public class KeyboardEvents extends Frame implements KeyListener {
	 Label l;    
	 TextArea area;    
     KeyboardEvents() {    
	        l = new Label();   
	        l.setBounds (20, 50, 100, 20);    
	        area = new TextArea();    
	        area.setBounds (20, 80, 500, 500);    
	        area.addKeyListener(this);  
	        add(l);  
	        add(area);    
	        setSize (600, 600);    
	        setLayout (null);    
	        setVisible (true);    
			addWindowListener (new WindowAdapter(){
				public void windowClosing(WindowEvent we) {
					System.exit(0);
				}
				});
	    }    
	   
	    public void keyPressed (KeyEvent e) {    
	        l.setText ("Key Pressed"); 
	        System.out.println("key pressed.");
	    }    
	    public void keyReleased (KeyEvent e) {    
	        l.setText ("Key Released");
	        System.out.println("key released.");
	    }
	    public void keyTyped (KeyEvent e) {    
	        l.setText ("Key Typed");   
	        System.out.println("key typed.");
	    }    
	public static void main(String[] args) {
		 new KeyboardEvents();
		}
}
