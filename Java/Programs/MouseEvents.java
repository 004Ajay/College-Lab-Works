/*
Write a Java program for handling mouse events.
*/

import java.awt.*;
import java.awt.event.*;
public  class MouseEvents extends Frame implements MouseListener, MouseMotionListener{
	String txt="";
	public  MouseEvents() {
		addMouseListener(this);
		addMouseMotionListener(this);
		setSize(1368,720);
		setVisible(true);
		addWindowListener (new WindowAdapter(){
		public void windowClosing(WindowEvent we) {
			System.exit(0);
		}
		});
	}
	public void mousePressed(MouseEvent e) {
		setBackground(Color.green);
		System.out.println("Mouse is pressed");
	}
	public void mouseReleased(MouseEvent e) {
		setBackground(Color.red);
		System.out.println("Mouse is Released");
	}
	public void mouseClicked(MouseEvent e) {
		setBackground(Color.yellow);
		System.out.println("Mouse is Clicked");
	}
	public void mouseEntered(MouseEvent e) {
		setBackground(Color.gray);
		System.out.println("Mouse is Entered");
	}
	public void mouseExited(MouseEvent e) {
		setBackground(Color.black);
		System.out.println("Mouse is Exited");
		setTitle("mouse Exited");
	}
	public void mouseMoved(MouseEvent me)
	{
		txt="the mouse is moved";
		setForeground(Color.white);
		Graphics g=getGraphics();
		g.setColor(Color.orange);
		g.drawString(txt,me.getX(),me.getY());
		System.out.println("Mouse Moved");
		setTitle("Mouse Moved");
	}
	public void MouseDragged(MouseEvent me) {
		System.out.println("Mouse is dragged");
		Graphics g=getGraphics();
		g.fillOval(me.getX(),me.getY(),20,20);
	}
	
		public static void main(String[] args) {
			new MouseEvents();
		}
		@Override
		public void mouseDragged(MouseEvent e) {
		}
	}