#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
   int num=4,i=2;
   printf("Prime Numbers are:\n2\n3");
   
   for (num=4;num<=500;num++)
   {
          
       
       for(i=2;i<=num;i++)
      {                
         if(num%i==0)               
         break;
         
         else
         continue; 
         
        
      }
      
      if(i==num)      
        printf("\n%d",num);          
                               
   }                  
          
                                                      
   
getch();
}

 
