#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{

  int count, hrs,over_hrs,pay,tot_pay,sum=0; 
      
     for(count=0;count<5;count++)    
    {    
   
          printf("\n     Enter the hours worked by the %d employee:",count+1);
          
          scanf("%d",&hrs);
          
          over_hrs=hrs-40;
          
          pay=over_hrs*12;
          
          
          
          
          if(over_hrs>0)
          {
                         printf("\n      Your overtime pay is %d",pay);
                         sum=sum+pay; 
                                   
          }       
          else
           

          {
                
               printf(" \n     Your overtime pay is Rs.00");
               
          }
          
                        
          
    }
    
   
      
      
      printf(" \n\nThe total pay is:%d",sum);
      
      
      
      
      
getch();

}

 
