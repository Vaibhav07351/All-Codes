#include<stdio.h>
#include<conio.h>

main()
{
int a,b,temp;

printf("Please write your numeric content in A location:");
scanf("%d",&a);

 
printf(" \n Please write your numeric content in B location:");
scanf("%d",&b);
temp=a;
a=b;


printf("The value of location A is now:");
printf("%d",a);

b=temp;

printf(" \n The value of location B is now:");
printf("%d",b);


getch();
}

 
