#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
  char ch=65;
  int i,j,count,space;
  
  for(i=0;i<7;i++)
  {
                  j=7-i;
                  for(count=0;count<j;count++,ch++)
                  {
                                  
                                  printf(" %c",ch);
                  }
                  space=i;
                
                  while(space>0)
                  {
                               printf("  ");
                               space--;
                  }
                  ch--;
                  space=i-1;
  
                  while(space>0)
                  {
                               printf("  ",space);
                               space--;
                  }
                  j=7-i;
                  for(count=0;count<j;count++,ch--)
                  {
                                  if(ch=='G')
                                  continue;
                                  printf(" %c",ch);
                  }
                  
                  printf("\n");
                  ch=65;
  }
      
getch();

}

 
