#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
  int  a,b,c,d,arm,num=1;
  
  for(num;num<500;num++)
  {    
     a=num%10;
     b=num/10;
     c=b%10;
     d=b/10;
     
     if(num==(d*d*d)+ (c*c*c)  +  (a*a*a) )
     
     printf("\n The  armstrong numbers between 1 to 500 are :  %d",num); 
     
  }   
      
getch();

}

 
