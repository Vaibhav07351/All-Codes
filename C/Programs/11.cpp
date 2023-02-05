#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
main()
{
 
  int line,count,space,q=1,r,num=1;
  
  for(line=5;line>0;line--,num*=11)
  {
                           q=num;
                           space=line;
                           while(space)
                           {
                                       printf(" ");
                                       space--;
                           }
                           while(q>0)
                           {
                                     r=q%10;
                                     printf(" %d",r);
                                     q=q/10;
                           } 
                           printf("\n");
  }









      
getch();

}

 
