#include<stdio.h>
#include<conio.h>
main()
{
 int a,b,c,d;
 
 printf("Please enter the amount of money..");
 scanf("%d",&a);
 
 b=a/100;
 c=(a%100)/50;
 d=(a-(100*b+50*c))/10;
 
 printf("\n Number of Rupees 100 notes are:");
 printf("%d",b);
 
 printf("\n Number of Rupees 50 notes are:");
 printf("%d",c);
 
 printf("\n Number of Rupees 10 notes are:");
 printf("%d",d);
     
            
      
getch();

}

 
