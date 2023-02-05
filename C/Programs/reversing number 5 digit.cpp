#include<stdio.h>
#include<conio.h>
main()
{
      
int a,b,c,d,e,f,g,h,i,j;

printf("Write your 5 digit no.:");
scanf("%d",&a);     
            
b=a%10;
c=a/10;
d=c%10;
e=c/10;
f=e%10;
g=e/10;
h=g%10;
i=g/10;


j=10000*b+1000*d+100*f+10*h+1*i ;

printf ("This is your reversing no.:");
printf("%d",j);
      
getch();

}

 
