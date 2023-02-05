#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
  int  num,count;
  
 printf("Enter a number please:"); 
 scanf("%d",&num);
 
 count=num;
 
  for(num;num>1;num--) 
  { 
      count = count*(num-1);                 
                        
  } 
  
  
   printf("\n\nThe factorial value of the no.is: %d",count);
          
getch();

}

 
