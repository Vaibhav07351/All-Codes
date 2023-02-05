#include<bits/stdc++.h>
#define int long long int
using namespace std;

class mathPower
{

	public:
		//constructor sets private variables value to zero at object creation
		mathPower (){    
			number=0;
			power=0;
		}
		void getValue ();
		int calculate ();
		void setValue();
		
	private:
		int number;
		int power;
};

//public function definitions outside class to access private variakbles
//fuction to get input from user
void mathPower:: getValue(){
	cout<<"Enter the number : ";
	cin>>number;
	cout<<"Enter the power  : ";
	cin>>power;
	cout<<endl;
}

//if power is negative set it to positive
void mathPower::setValue(){
	if(power<0)
	power=power*-1;
}

//finally calculate the power of a number
int mathPower::calculate(){
	int res;
	res=pow(number,power);
	return res;
}

signed main()
{

	mathPower s;
	s.getValue();
	s.setValue();
	cout<<"The result is : "<<s.calculate();


	return 0;
}

