#include<stdio.h>
#include<conio.h>

main()
{
int a,b,c,d,e,f;


printf("Please write your 3 digit number:");
scanf("%d",&a);

b=a%10;
c=a/10;
d=c%10;
e=c/10;

f=b+d+e;

printf("  This is the sum of your 3 digit no. :");
printf("%d ",f);

getch();

}

 
