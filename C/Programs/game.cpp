#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
  int choice,tot=21;
  char ch;
  ch=1;
  
  printf("                          Wanna play an interesting game? \n\n\n  Here it follows... The rules are:\n\n\n\n There are 21 matchsticks.\n Pick 1,2,3 or 4 matchsticks. \n Whoever is forced to pick up the last matchstick loses the game!!!   ");
  printf("\n\n Now what are you reading please pick!! :   ");
  for(tot;tot>1;)
  {
              printf("\nYour turn:");
              scanf("%d",&choice);
              if(choice>4||choice<1)
              {
                                    printf("\nSorry! you are allowed to choose from 1 to 4 only..");
                                    continue;
              }

              tot-=choice;
              if(tot==20||tot==15||tot==10||tot==5)
              {
                                                   printf("\nI Choose 4!");
                                                   tot-=4;
              }
              else if(tot==19||tot==14||tot==9||tot==4)
              {
                                                   printf("\nI Choose 3!");
                                                   tot-=3;
              }
              else if(tot==18||tot==13||tot==8||tot==3)
              {
                                                   printf("\nI Choose 2!");
                                                   tot-=2;
              }
              else if(tot==17||tot==12||tot==7||tot==2)
              {
                                                   printf("\nI Choose 1!");
                                                   tot-=1;
              }
              printf("\nSticks left are..%d",tot);
              
              if(tot==1)
              {
                        printf("\n\nOnly last stick is left and its your turn.. Therefore, you lose %c",ch );
              }
 
 }

getch();
}

 
