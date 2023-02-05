#include<bits/stdc++.h>
#define int long long int
using namespace std;


int TOH(int n, char A,char B,char C)
{	
	if(n>0)
	{
		
	TOH(n-1,A,C,B);
	cout<<A<<" to "<<C<<endl;
		
	TOH(n-1,B,A,C);
	
	}
	
	
}




signed main()
{

	TOH(3,'A','B','C');


	return 0;
}

