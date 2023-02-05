#include<stdio.h>
#include<conio.h>
main()
{
  
  int cp,sp,p,l;
  
  printf("Enter the Cost price please...");
  scanf("%d",&cp);
  
  printf("Enter the selling price please...");
  scanf("%d",&sp);
  
  p = sp-cp;
  l = cp-sp;
  
  if(sp>cp)
  {
           printf("Congratulations you have made a profit of Rs.");
           printf("%d",p);
  }
  
  else
  {
           printf("Unfortunately you have made a loss of Rs.");
           printf("%d",l);
  }
          
getch();

}

 
