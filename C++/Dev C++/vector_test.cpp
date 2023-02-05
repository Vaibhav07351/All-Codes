#include<bits/stdc++.h>
using namespace std;

int main()
{
	int val;
	vector<int> arr;
	
	for(int i=0;i<5;i++)
	{
		cin>>val;
		arr.push_back(val);
	}

cout<<endl<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}

arr.clear();

cout<<endl<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}


	return 0;
}

