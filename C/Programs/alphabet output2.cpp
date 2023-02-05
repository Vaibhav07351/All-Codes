#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
main()
{
 
  int line, num, count, space ;
  
  printf("Enter the number from where you want the table:  ");
  scanf("%d",&count);
  
  for(line=0;line<4;line++)
   {  
             printf("    ");
      for(num=line+1;num>0;num--)
      {
            
             if(line==0)
             printf("      ");
             
             if(line==1)
             printf("   ");
             
             if(line==2)
             printf("  ");
             if(line==3)
             printf(" ");
             
                printf(" %d",count);
                count++;
      }
                
      printf("\n");
  }
getch();

}

 
