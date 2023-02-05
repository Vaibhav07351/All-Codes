import java.security.Principal;
import java.util.Scanner;

public class compare 
{
    public static void main(String[] args) 
    {
        
        Scanner sc=new Scanner(System.in);   //creating object sc of Scanner class

        int num1=sc.nextInt();    //taking 1st input using scanner class object (sc) and storing it in variable 'num1'
        int num2=sc.nextInt();    //taking 2nd input using scanner class object (sc) and storing it in variable 'num2'

        if(num1>num2) 
        System.out.println("First is larger");
        if(num1<num2)
        System.out.println("second is larger");
        if(num1==num2)
        System.out.println("number are equal");             
          }

    }
    

}
