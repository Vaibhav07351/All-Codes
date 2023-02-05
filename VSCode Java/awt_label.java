
import java.awt.*;
public class awt_label 
{
    awt_label()
    {
        Frame f = new Frame("Hello label");
        Label l = new Label("Nameismku");
        Label l2 = new Label ("Second Label.");   
        f.setBounds(500,100,50,50);
        f.add(l);
        f.add(l2);
        l.setBounds(70, 100, 100, 100);    
        l2.setBounds(50, 250, 100, 100);  
        f.setSize(500,500);
        f.setLayout(null);
        f.setVisible(true);

    }
    
    public static void main(String[] args) 
    {
        awt_label obj = new awt_label();
        
    }

}
