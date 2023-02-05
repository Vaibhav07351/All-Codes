#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
  
  int num,quo,pro;
  char choice;

do
{  
        system("cls");
        printf("Please enter the number for its table: ");
        scanf("%d",&num);
         printf("\nThe table is as follows: \n");
         
             
  for(quo=1;quo<=10;quo++)
  {     
        pro=num*quo;
        
        printf("\n     %d * %d = %d ",num,quo,pro);

  }

  printf("\n\nFir se krna hai? (y/n): ");
  scanf(" %c",&choice);  
}while(choice=='y');          
     
      
getch();

}

 
