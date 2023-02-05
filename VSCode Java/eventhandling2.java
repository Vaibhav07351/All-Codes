import java.awt.event.*;
import java.awt.*;

public class eventhandling2 
{   
    public static void main(String[] args) 
    {
        Frame f=new Frame("Bhadwa Checker");
        Label l1= new Label("Are You A Bhadwaa?");
        Label l2= new Label();
        Button b1=new Button("Am I?");
        Button b2=new Button("Am I?");
        Button b3=new Button("Am i?");
        f.add(l1);
        f.add(l2);
        f.add(b1);
        f.add(b2);
        f.add(b3);  
        l1.setBounds(180,40,200,20);
        b1.setBounds(80,200,50,50);
        b2.setBounds(180,200,50,50);
        b3.setBounds(280,200,50,50);
        f.setSize(500,500);
        f.setLayout(null);

        f.setVisible(true);
         
        b1.addActionListener(new ActionListener()
        {
            public void actionPerformed (ActionEvent e)
            {   
               
                l2.setBounds(110,80,400,50);
                l2.setText("CONGRATULATIONS!! YOU ARE A BHADWAAA..");
            }


        });

         
        b2.addActionListener(new ActionListener()
        {
            public void actionPerformed (ActionEvent e)
            {   
               
                l2.setBounds(130,80,400,50);
                l2.setText("SADLY !! YOU ARE NOT A BHADWAAA..");
            }


        });
        
         
        b3.addActionListener(new ActionListener()
        {
            public void actionPerformed (ActionEvent e)
            {   
               
                l2.setBounds(100,80,400,50);
                l2.setText("CONGRATULATIONS!! YOU ARE A BHADWAAA & LAWDA..");
            }


        });
        
        

      
    }
    
}
