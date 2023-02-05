#include<stdio.h>
#include<conio.h>
main()
{
      
 int a,b,c,d,e,f,g,h;
 
 printf("Please input your 4 digit numeric number:");
 scanf("%d",&a);
 
 b=a%10;
 c=a/10;
 d=c%10;
 e=c/10;
 f=e%10;
 g=e/10;     
   
 h=b+g;     
   
 printf("\n Hi! this is the sum of your first and last digit of the no. you just typed:"); 
 printf("%d",h);    
      
      
getch();

}

 
