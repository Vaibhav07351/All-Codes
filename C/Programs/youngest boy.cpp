#include<stdio.h>
#include<conio.h>
main()
{
  
  int a,b,c,min;
  
   printf("Enter the age of Ram:");
   scanf("%d",&a);
  
   printf("\n\nEnter the age of Shyam:");
   scanf("%d",&b);
  
   printf("\n\nEnter the age of Ajay:");
   scanf("%d",&c);
   
   min=a;
   
   if(b<min)
            min=b;
   if(c<min)
            min=c;
            
   printf("\n%d",min);
        
   /*if ((b>a)&&(c>a))
   printf("\nThe youngest among all is Ram of age %d",a);
   
   else if((a>b)&&(c>b))
   printf("\nThe youngest among all is Shyam of age %d",b);
   
   else if((a>c)&&(b>c))
   printf("\nThe youngest among all is Ajay of age %d",c);*/
          
         
getch();

}

 
