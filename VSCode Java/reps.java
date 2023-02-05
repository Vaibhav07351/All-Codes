import java.security.Principal;
import java.util.Scanner;

public class reps 
{
    public static void main(String[] args)
    {
        int rep=0;
        Scanner sc=new Scanner(System.in);   //creating object sc of Scanner class
        int n=sc.nextInt();

        for(int i=1;i<=n;i++)
        {
            if(i%6==0)
            {
                System.out.println("A set is completed");
                continue;
            }
            System.out.println("Rep is completed");
        }

    }

}
