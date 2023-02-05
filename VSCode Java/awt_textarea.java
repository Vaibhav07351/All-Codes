import java.awt.*;

public class awt_textarea 
{   
    awt_textarea()
    {
        Frame f = new Frame();
        TextArea ta= new TextArea("10-A Kailash Puri Garh Road Meerut \n asdhasdhaksdhk");
        f.add(ta);
        ta.setBounds(40,80,400,100);
        f.setSize(500,500);
        f.setLayout(null);
        f.setVisible(true);

    }

    public static void main(String[] args) 
    {
        awt_textarea obj1 = new awt_textarea();    
    }

    
}
