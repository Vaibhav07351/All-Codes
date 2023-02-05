#include<bits/stdc++.h>
#include<string>
using namespace std;

class ResidentTower     //class of name ResidentTower
{
	public:
	string data[6];            //All data to be stored in an array of size 6

	void storedata();          //function declaration done here
	int calcemptyflats();
	void showinfo();
};

void ResidentTower::storedata()                //function definitions done one by one outside
{
	string towid, towname, blockno, roadno, NumberOfFlats, RentedFlats;                             //all variable of string data type to be stored in string array
	cout<<"Enter Tower id : ";
	cin>>towid;                                     //individival taking input in variables
	cout<<"Enter Tower name : ";
	cin.ignore();
	getline(cin,towname);
	cout<<"Enter block number : ";
	cin>>blockno;
	cout<<"Enter road number : ";
	cin>>roadno;
	cout<<"Enter number of flats : ";
	cin>>NumberOfFlats;
	cout<<"Enter rented flats : ";
	cin>>RentedFlats;
	
	data[0]=towid;                                //storing input of variables in an array of string type
	data[1]=towname;
	data[2]=blockno;
	data[3]=roadno;
	data[4]=NumberOfFlats;
	data[5]=RentedFlats;
}

int ResidentTower::calcemptyflats()
{
	return (stoi(data[4])-stoi(data[5]) );                  //returning empty flats as integer as Empty flat = Total number of flat- Rented Flats 
}

void ResidentTower::showinfo()
{
	cout<<"The Info is -> "<<endl<<endl;                // All the info is shown in display
	cout<<"Towerid = "<<data[0]<<endl;
	cout<<"Tower Name = "<<data[1]<<endl;
	cout<<"Block number = "<<data[2]<<endl;
	cout<<"Road number = "<<data[3]<<endl;
	cout<<"Number of Flats = "<<data[4]<<endl;
	cout<<"Rented flats = "<<data[5]<<endl;
	
	
}



int main()
{
	int emptyflat; 
	ResidentTower rt1;                 //an object rt1 is made of the class
	
	rt1.storedata();                  //class functions  are called using object 
	emptyflat=rt1.calcemptyflats();
	rt1.showinfo();
	cout<<endl<<emptyflat;	


	return 0;
}

