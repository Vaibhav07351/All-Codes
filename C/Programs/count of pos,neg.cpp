#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
  char choice;    
  int  num,count_pos=0,count_neg=0,count_zer=0;
  
  do
  {   
       printf("\n\nPlease enter the number:   ");
       scanf("%d",&num);
       
       if(num>0)
       count_pos++;
       
       if(num<0)
       count_neg++;
       
       if(num==0)
       count_zer++;         
       
       printf("\nWant to enter another number y/n: ");
       //fflush(stdin);
       scanf(" %c",&choice);
       
         
   }while(choice=='y');
   
      printf("\n\nThe number of positive nos. you have entered are %d",count_pos);
      printf("\nThe number of negative nos. you have entered are %d",count_neg);
      printf("\nThe number of zeroes. you have entered are %d",count_zer);
getch();
}

 
