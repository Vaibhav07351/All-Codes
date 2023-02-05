#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
  
int x,y,rad,a,b,area,n,m;
  
  printf("Please enter the x coordinate of centre of the circle:");
  scanf("%d",&x);
  
  printf("Please enter the y coordinate of centre of the circle:");
  scanf("%d",&y);
  
  printf("Please enter the radius of the circle:");
  scanf("%d",&rad);
  
  printf("Please enter the x coordinate of point:");
  scanf("%d",&a);
  
  printf("Please enter the y coordinate of point:");
  scanf("%d",&b);
  
  
  n = sqrt( pow(a-x,2)+pow(b-y,2) );
  
  if(n<rad)
  printf("the point is inside the circle");
  
  else
  { 
      if(n>rad)
    printf("the point is outside the circle");
    
    else 
    printf("the point is on the circumference of the circle");
   }
     
  
      
getch();

}

 
