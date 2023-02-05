import java.awt.*;

public class awt_radiobutton 
{
    awt_radiobutton()
    {
        Frame f= new Frame("Hello Radiobutton");
        CheckboxGroup cbg= new CheckboxGroup();
        Checkbox c1= new Checkbox("CSE",cbg,true);
        Checkbox c2= new Checkbox("IT",cbg ,false);
        Checkbox c3= new Checkbox("ME",cbg ,true);
        Checkbox c4= new Checkbox("EE",cbg ,false);
        c1.setBounds(40,100,80,10);
        c2.setBounds(40,140,80,10);
        c3.setBounds(40,180,80,10);
        c4.setBounds(40,220,80,10);
        f.add(c1);
        f.add(c2);
        f.add(c3);
        f.add(c4);
       
        f.setSize(500,500);
        f.setLayout(null);
        f.setVisible(true);
    } 
    
    public static void main(String[] args) 
    {
        awt_radiobutton obj1= new awt_radiobutton();
    }


}
