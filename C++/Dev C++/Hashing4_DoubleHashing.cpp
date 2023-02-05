#include<bits/stdc++.h>
#define int long long int
using namespace std;

int hashfn(int key)
{
	int index = key%10;

	return index;
}


int hashfn2(int key)
{
	int index = 7-(key%7);

	return index;
}


int probe(int HT[],int key)
{
	int i=0;
	int index=hashfn(key);
	while(HT[(index+i*(hashfn2(key)))%10]!=0)
	{
		i++;
	}
//	cout<<"Emp Index="<<index<<endl;
	return (index+i*(hashfn2(key)))%10;
}




void HashInsert(int HT[],int key)
{
	int index=hashfn(key);
		
	if(HT[index]!=0)
	index=probe(HT,key);
	
	HT[index]=key;
	
}

void Search(int HT[],int key)
{
	int index=hashfn(key);
	
	int i=0;
	
	while( HT[(index+i*(hashfn2(key)))%10]!=key && HT[index]!=0)
	{
			i++;
	}

	if(HT[(index+i*(hashfn2(key)))%10]==key)
	{
		cout<<"key found at index "<<(index+i*(hashfn2(key)))%10<<endl;
	}
	else
	cout<<"Key not found"<<endl;
	
}

signed main()
{
	int HT[10]={0};
	
	HashInsert(HT,5);
	HashInsert(HT,25);
	HashInsert(HT,15);
	HashInsert(HT,35);
	HashInsert(HT,95);	
	//HashInsert(HT,29);	
	for(int i=0;i<10;i++)
	{
		cout<<"HT["<<i<<"] = "<<HT[i]<<endl;
	}
	
	Search(HT,5);
	Search(HT,25);
	Search(HT,15);
	Search(HT,35);
	Search(HT,95);
//	Search(HT,29);
	

	return 0;
}

