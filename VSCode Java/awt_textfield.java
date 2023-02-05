import java.awt.*;

public class awt_textfield 
{
    awt_textfield()
    {
        Frame f= new Frame("hello textfield");
        TextField tf = new TextField("HELLO MAN!");
        TextField tf1 = new TextField("YO BRO!");
        f.add(tf);
        f.add(tf1);
        tf.setBounds(40,80,100,25);
        tf1.setBounds(40,120,100,25);
        f.setSize(500,500);
        f.setLayout(null);
        f.setVisible(true);

    }
    
    public static void main(String[] args) 
    {
        awt_textfield obj1= new awt_textfield();    
    }





}
