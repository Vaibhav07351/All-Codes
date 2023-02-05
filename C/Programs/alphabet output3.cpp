#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
main()
{
 
  int line, num, count=1, space ;
  

  for(line=0;line<5;line++,count*=11)
   {  
            
            space=10-2*line;
            for(space;space>0;space--)
            { 
                                      printf(" ");
              
            }
             
             
      printf("%d",count); 
                
      printf("\n");
   }

      
getch();

}

 
