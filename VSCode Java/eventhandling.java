import java.awt.event.*;
import java.awt.*;

public class eventhandling 
{   
    public static void main(String[] args) 
    {
        Frame f=new Frame();
        TextField t= new TextField();
        Button b=new Button("Click!");
        f.add(t);
        f.add(b); 
        b.setBounds(200,200,50,50);
       // t.setBounds(130,50,200,50);   //Not here otherwise visible
        f.setSize(500,500);
        f.setLayout(null);
        f.setVisible(true);
         
        b.addActionListener(new ActionListener()
        {
            public void actionPerformed (ActionEvent e)
            {   
               // t.setLocation(40, 200);
               t.setBounds(130,50,200,50);
                t.setText("You just Clicked a Button!!!");
                
            }
        
});
        
      
    }
    
}
