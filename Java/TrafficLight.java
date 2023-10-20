//Java Program to create a Traffic Light

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class TrafficLight extends JFrame implements ActionListener {

JFrame frame = new JFrame();
JLabel label;
JRadioButton red, green, yellow;
JTextField txt;
Container c;
ButtonGroup bg;
   
    TrafficLight(){
    setLayout(new FlowLayout());
    c=getContentPane();
   
red = new JRadioButton("RED");
red.setBounds(50,100,95,30);

green = new JRadioButton("GREEN");
green.setBounds(50,100,95,30);

yellow=new JRadioButton("YELLOW");
yellow.setBounds(50,100,95,30);

bg=new ButtonGroup();

txt=new JTextField(32);

label=new JLabel("TRAFFIC LIGHT");

c=this.getContentPane();
c.setLayout(new FlowLayout());

red.addActionListener(this);
green.addActionListener(this);
yellow.addActionListener(this);

c.add(label);
c.add(red);
c.add(green);
c.add(yellow);
c.add(txt);

bg.add(red);
bg.add(green);
bg.add(yellow);

this.setVisible(true);
this.setSize(500,500);
this.setTitle("Traffic Lights");
this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
c.setBackground(Color.white);
}
   
public void actionPerformed(ActionEvent e){

if(e.getSource() == red){
txt.setText("RED : Turned On");
c.setBackground(Color.red);
}

if(e.getSource() == green){
txt.setText("GREEN : Turned On");
c.setBackground(Color.green);
}

if(e.getSource() == yellow){
txt.setText("YELLOW : Turned On");
c.setBackground(Color.yellow);
}
}

public static void main(String[] args) {
new TrafficLight();
    }
}
