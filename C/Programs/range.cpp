#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
   char choice;   
   int  num,min,max,range,count;
   
   printf("Please enter the number:  ");
   scanf("%d",&num);
   min=num;
   max=num;
   printf("Want to enter another number y/n");
   scanf(" %c",&choice);
   
   for(;choice=='y';)
   {  
      printf("Please enter the number:  ");
      scanf("%d",&num); 
      if(num>max)
                 max=num;
      else if(num<min);
                 min=num; 
       
      printf("Want to enter another number y/n");
      scanf(" %c",&choice);
   }

  range=max-min;
  printf("The range of the numbers is:  %d",range);





getch();
}

 
