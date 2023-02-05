/* Calculation of simle interest */
/* Author gekay  Date: 02/06/2016 */

#include<stdio.h>

main()
{
     int p,n;
     float r,si;

     
     printf("Give the value for principle amount:");
     scanf("%d",&p);
     
     printf("\nGive the value for time in years:");
     scanf("%d",&n);

     printf("\nGive the rate of interest:");
     scanf("%f",&r);     
     
          /* formula for simple interst */
     si= p*n*r/100;
     
     printf("Simple interest for the given values is:");     
     printf("%f",si);
     
     printf("\n\nPress 1 to exit..");
     scanf("%d",&p);
     
     if(p==1)
     {
             }
     else
     {
         printf("pagal hai kya? dobara daal");
         scanf("%d",&p);
     }
        
     
}
     
     
     
 
