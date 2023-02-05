#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
main()
{
 
  int n,n1,n2,n3;
  n1=n2=1;
  
  printf("\n Enter the no. upto which you want to display the fibonacci series: ");
  scanf("%d",&n);
  printf("\n Fibonacci series is:\n");
  if(n==1)
  printf("  1");
  else if (n==2)
  printf("  1  1");
  else 
  {
       printf("  1  1 ");
       
       while(n-2>=1)
       {
                    n3=n1+n2;
                    printf("%  d",n3);
                    n1=n2;
                    n2=n3;
                    n--;
       }

  }
getch();

}

 
