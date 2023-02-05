import java.awt.*;

import javax.swing.ScrollPaneLayout;
public class awt_button
{
    awt_button()
    {
        Frame f= new Frame(" hello");
        Button b1= new Button("Button 1");
        Button b2= new Button("Button 2");
        Button b3= new Button("Button 3");
        Button b4= new Button("Button 4");
        Button b5= new Button("Button 5");
        Button b6= new Button("Button 6");
        Button b7= new Button("Button 7");
        Button b8= new Button("Button 8");
        //b1.setBounds(40,200,80,90);
       // b2.setBounds(280,200,80,45);
        f.add(b1);
        f.add(b2);
        f.add(b3);
        f.add(b4);
        f.add(b5);
        f.add(b6);
        f.add(b7);
        f.add(b8);


        
        f.setSize(500,500);
        f.setLayout(new FlowLayout());
        f.setVisible(true);

    }    

    public static void main(String[] args) 
    {
        awt_button obj = new awt_button();    
    }











}

