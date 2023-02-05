#include<stdio.h>
#include<conio.h>
main()
{
      
int a,b,c,d,e,f;

printf("Write your 3 digit no.:");
scanf("%d",&a);     
            
b=a%10;
c=a/10;
d=c%10;
e=c/10;


f=100*b+10*d+1*e ;

printf ("This is your reversing no.:");
printf("%d",f);
      
getch();

}

 
