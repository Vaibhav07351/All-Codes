#include<stdio.h>
#include<conio.h>
#include<fstream.h>
#include<dos.h>

class people
{
	public:
	char name[25];
	float date1;
	float ti;
	char address[50];
	char dest[50];
	int pno;
	int nod;
	char eid[40];
};

   char n[20],cn1,cn2,cn3 ;
   int a,co=0,ct1;

   void pdata()
   {
	ofstream out;
	out.open("car.txt",ios::app);
	people p;
	out.write((char *)&p,sizeof(p));
	cout<<endl<<"Please enter your name : ";
	gets(p.name);
	cout<<endl;
	cout<<"Please enter the date(mm.dd) of travel : ";
	cin>>p.date1;
	cout<<endl;
	cout<<"please enter the time of journey(hh.mm) : ";
	cin>>p.ti;
	cout<<endl;
	cout<<"Please enter your address : ";
	gets(p.address);
	cout<<endl;
	cout<<"Please enter your destination : ";
	gets(p.dest);
	cout<<endl;
	cout<<"Please enter your phone number : ";
	cin>>p.pno;
	cout<<endl;
	cout<<"Please enter the duration of trip(number of days) : ";
	cin>>p.nod;
	cout<<endl;
	cout<<"Please enter your email id : " ;
	gets(p.eid);
	cout<<endl;
	out<<"Name : "<<p.name<<endl;
	out<<"date of trip : "<<p.date1<<endl;
	out<<"time of trip : "<<p.ti<<endl;
	out<<"Address : "<<p.address<<endl;
	out<<"Destination>"<<p.dest<<endl;
	out<<"Phone number : "<<p.pno<<endl;
	out<<"Duration of trip : "<<p.nod<<"days"<<endl;

	out.close();
}
void cabs()
{
 cout<<"Enter the car type"<<endl;
 cout<<"1 -> SUV"<<endl;
 cout<<"2 -> Sedan"<<endl;
 cout<<"3 -> Hatchback"<<endl;
 cin>>ct1;
 switch(ct1)
 {
  case 1: cout<<"Enter the car alphabet corresponding to its name"<<endl;
	 cout<<"a -> Vitara Brezza "<<endl;
	 cout<<"b -> Qualis "<<endl;
	 cout<<"c -> Toyota Innova "<<endl;
	 cout<<"d -> Creta"<<endl;
	 cout<<"e -> XUV 500"<<endl;
	 cin>>cn1;

	 switch(cn1)
	 {
	  case 'a': clrscr();
		  cout<<"You entered for Vitara Breezza"<<endl;
		  co++;
		  cout<<"Please wait checking for availability";
		  for(int i=0;i<3;i++)
		  {
		  cout<<".";
		  delay(500);
		  cout<<".";
		  delay(500);
		  cout<<".";
		  delay(500);
		  cout<<".";
		  }

		  if(co==4)
		  { cout<<endl<<"Sorry but the car is unavailable right now"<<endl; }

		  else
		  { cout<<endl<<"The car is available"<<endl;
		    cout<<"The rent of the car is rupees 10 per km";
		    pdata();}

		  break;
	 case 'b': clrscr();
		  cout<<"You entered for Qualis"<<endl;
		  co++;
		  cout<<"Please wait checking for availability";
		  for(int j=0;j<3;j++)
		  {
		  cout<<".";
		  delay(500);
		  cout<<".";
		  delay(500);
		  cout<<".";
		  delay(500);
		  cout<<".";
		  }

		  if(co==4)
		  { cout<<endl<<"Sorry but the car is unavailable right now"<<endl; }

		  else
		  { cout<<endl<<"The car is available"<<endl;
		    cout<<"The rent of the car is rupees 11 per km";
		    pdata();}
		   break;

	 case 'c': clrscr();
		  cout<<"You entered for Innova"<<endl;
		  co++;
		  cout<<"Please wait checking for availability";
		  for(int k=0;k<3;k++)
		  {
		  cout<<".";
		  delay(500);
		  cout<<".";
		  delay(500);
		  cout<<".";
		  delay(500);
		  cout<<".";
		  }

		  if(co==4)
		  { cout<<endl<<"Sorry but the car is unavailable right now"<<endl; }

		  else
		  { cout<<endl<<"The car is available"<<endl;
		    cout<<"The rent of the car is rupees 10 per km";
		    pdata();}
		  break;

	 case 'd': clrscr();
		  cout<<"You entered for Creta"<<endl;
		  co++;
		  cout<<"Please wait checking for availability";
		  for(int l=0;l<3;l++)
		  {
		  cout<<".";
		  delay(500);
		  cout<<".";
		  delay(500);
		  cout<<".";
		  delay(500);
		  cout<<".";
		  }

		  if(co==4)
		  { cout<<endl<<"Sorry but the car is unavailable right now"<<endl; }

		  else
		  { cout<<endl<<"The car is available"<<endl;
		    cout<<"The rent of the car is rupees 10 per km";
		    pdata();}
		   break;

	 case 'e': clrscr();
		  cout<<"You entered for XUV 500"<<endl;
		  co++;
		  cout<<"Please wait checking for availability";
		  for(int m=0;m<3;m++)
		  {
		  cout<<".";
		  delay(500);
		  cout<<".";
		  delay(500);
		  cout<<".";
		  delay(500);
		  cout<<".";
		  }

		  if(co==4)
		  { cout<<endl<<"Sorry but the car is unavailable right now"<<endl; }

		  else
		  { cout<<endl<<"The car is available"<<endl;
		    cout<<"The rent of the car is rupees 10 per km";
		    pdata();}
		   break;
	 }
	 break;
  case 2: cout<<"Enter the car no. corresponding to its name"<<endl;
	 cout<<"a -> Dzire"<<endl;
	 cout<<"b -> Audi A4 "<<endl;
	 cout<<"c -> Mercedes Benz CLA"<<endl;
	 cout<<"d -> Ciaz "<<endl;
	 cout<<"e -> Skoda Rapid"<<endl;
	 cin>>cn2;

	 switch(cn2)
	 {
	  case 'a': clrscr();
		  cout<<"You entered for Dzire"<<endl;
		  co++;
		  cout<<"Please wait checking for availability";
		  for(int i=0;i<3;i++)
		  {
		  cout<<".";
		  delay(500);
		  cout<<".";
		  delay(500);
		  cout<<".";
		  delay(500);
		  cout<<".";
		  }

		  if(co==4)
		  { cout<<endl<<"Sorry but the car is unavailable right now"<<endl; }

		  else
		  { cout<<endl<<"The car is available"<<endl;
		    cout<<"The rent of the car is rupees 9 per km";
		    pdata();}

		  break;
	 case 'b': clrscr();
		  cout<<"You entered for Audi A4"<<endl;
		  co++;
		  cout<<"Please wait checking for availability";
		  for(int j=0;j<3;j++)
		  {
		  cout<<".";
		  delay(500);
		  cout<<".";
		  delay(500);
		  cout<<".";
		  delay(500);
		  cout<<".";
		  }

		  if(co==4)
		  { cout<<endl<<"Sorry but the car is unavailable right now"<<endl; }

		  else
		  { cout<<endl<<"The car is available"<<endl;
		    cout<<"The rent of the car is rupees 50 per km";
		    pdata();}
		   break;

	 case 'c': clrscr();
		  cout<<"You entered for Mercedes Benz CLS"<<endl;
		  co++;
		  cout<<"Please wait checking for availability";
		  for(int k=0;k<3;k++)
		  {
		  cout<<".";
		  delay(500);
		  cout<<".";
		  delay(500);
		  cout<<".";
		  delay(500);
		  cout<<".";
		  }

		  if(co==4)
		  { cout<<endl<<"Sorry but the car is unavailable right now"<<endl; }

		  else
		  { cout<<endl<<"The car is available"<<endl;
		    cout<<"The rent of the car is rupees 50 per km";
		    pdata();}
		  break;

	 case 'd': clrscr();
		  cout<<"You entered for Ciaz"<<endl;
		  co++;
		  cout<<"Please wait checking for availability";
		  for(int l=0;l<3;l++)
		  {
		  cout<<".";
		  delay(500);
		  cout<<".";
		  delay(500);
		  cout<<".";
		  delay(500);
		  cout<<".";
		  }

		  if(co==4)
		  { cout<<endl<<"Sorry but the car is unavailable right now"<<endl; }

		  else
		  { cout<<endl<<"The car is available"<<endl;
		    cout<<"The rent of the car is rupees 9 per km";
		    pdata();}
		   break;

	 case 'e': clrscr();
		  cout<<"You entered for Skoda Rapid"<<endl;
		  co++;
		  cout<<"Please wait checking for availability";
		  for(int m=0;m<3;m++)
		  {
		  cout<<".";
		  delay(500);
		  cout<<".";
		  delay(500);
		  cout<<".";
		  delay(500);
		  cout<<".";
		  }

		  if(co==4)
		  { cout<<endl<<"Sorry but the car is unavailable right now"<<endl; }

		  else
		  { cout<<endl<<"The car is available"<<endl;
		    cout<<"The rent of the car is rupees 9 per km";
		    pdata();}
		   break;
	 }
	 break;

  case 3: cout<<"Enter the car no. corresponding to its name"<<endl;
	 cout<<"a -> Swift"<<endl;
	 cout<<"b -> Celerio"<<endl;
	 cout<<"c -> Baleno"<<endl;
	 cout<<"d -> WagonR"<<endl;
	 cout<<"e -> i20 Grand"<<endl;
	 cin>>cn3;
	 switch(cn3)
	 {
	  case 'a': clrscr();
		  cout<<"You entered for Swift"<<endl;
		  co++;
		  cout<<"Please wait checking for availability";
		  for(int i=0;i<3;i++)
		  {
		  cout<<".";
		  delay(500);
		  cout<<".";
		  delay(500);
		  cout<<".";
		  delay(500);
		  cout<<".";
		  }

		  if(co==4)
		  { cout<<endl<<"Sorry but the car is unavailable right now"<<endl; }

		  else
		  { cout<<endl<<"The car is available"<<endl;
		    cout<<"The rent of the car is rupees 8 per km";
		    pdata();}

		  break;
	 case 'b': clrscr();
		  cout<<"You entered for Celerio"<<endl;
		  co++;
		  cout<<"please wait checking for availability";
		  for(int j=0;j<3;j++)
		  {
		  cout<<".";
		  delay(500);
		  cout<<".";
		  delay(500);
		  cout<<".";
		  delay(500);
		  cout<<".";
		  }

		  if(co==4)
		  { cout<<endl<<"Sorry but the car is unavailable right now"<<endl; }

		  else
		  { cout<<endl<<"The car is available"<<endl;
		    cout<<"the rent of the car is rupees 8 per km";
		    pdata();}
		   break;

	 case 'c': clrscr();
		  cout<<"You entered for Baleno"<<endl;
		  co++;
		  cout<<"please wait checking for availability";
		  for(int k=0;k<3;k++)
		  {
		  cout<<".";
		  delay(500);
		  cout<<".";
		  delay(500);
		  cout<<".";
		  delay(500);
		  cout<<".";
		  }

		  if(co==4)
		  { cout<<endl<<"Sorry but the car is unavailable right now"<<endl; }

		  else
		  { cout<<endl<<"The car is available"<<endl;
		    cout<<"the rent of the car is rupees 8 per km";
		    pdata();}
		  break;

	 case 'd': clrscr();
		  cout<<"You entered for WagonR"<<endl;
		  co++;
		  cout<<"please wait checking for availability";
		  for(int l=0;l<3;l++)
		  {
		  cout<<".";
		  delay(500);
		  cout<<".";
		  delay(500);
		  cout<<".";
		  delay(500);
		  cout<<".";
		  }

		  if(co==4)
		  { cout<<endl<<"Sorry but the car is unavailable right now"<<endl; }

		  else
		  { cout<<endl<<"The car is available"<<endl;
		    cout<<"the rent of the car is rupees 8 per km";
		    pdata();}
		   break;

	 case 'e': clrscr();
		  cout<<"You entered for i20 Grand"<<endl;
		  co++;
		  cout<<"please wait checking for availability";
		  for(int m=0;m<3;m++)
		  {
		  cout<<".";
		  delay(500);
		  cout<<".";
		  delay(500);
		  cout<<".";
		  delay(500);
		  cout<<".";
		  }

		  if(co==4)
		  { cout<<endl<<"Sorry but the car is unavailable right now"<<endl; }

		  else
		  { cout<<endl<<"The car is available"<<endl;
		    cout<<"the rent of the car is rupees 8 per km";
		    pdata();}
		   break;
	 }
       break;
  default: cout<<"Invalid car no."<<endl;
	  cout<<"Oops!!! the program will be terminated";
 }
}

void main()

{
clrscr();
textbackground(BLACK);
textcolor(YELLOW);
int ct;
char r;
cabs();
int c=1;
for(int i=0;i<c;i++)
{
cout<<endl<<"do you want to get another cab besides this one?(y/n)";
cin>>r;
switch(r)
 {
   case 'y': cabs();
	     c++;
	     break;
   case 'n': cout<<"Thankyou for booking a car with us";
	     break;
   default : cout<<"invalid choice";
 }
}
cout<<endl<<"the car(s) would reach to your place at time";
getch();
}