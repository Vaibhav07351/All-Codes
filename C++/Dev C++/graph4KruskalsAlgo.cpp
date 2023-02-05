#include<bits/stdc++.h>
using namespace std;

#define I INT_MAX

int Graph[9][3]={ {1,2,25},{1,6,5},{2,3,12},{2,7,10},{3,4,8},
{4,5,16},{4,7,14},{5,6,20},{5,7,18}};

//int Graph[9][3]={{1,2,28},{1,6,10},{2,3,16},{2,7,14},{3,4,12},
//{4,5,22},{4,7,18},{5,6,25},{5,7,24}};



int Set[8]={-1,-1,-1,-1,-1,-1,-1,-1};
int included[9]={0,0,0,0,0,0,0,0,0};
int SpanningTree[6][2];

	int find(int u)
	{
		
		while(Set[u]>0)
		{
			u=Set[u];
		}
		
		return u;
	
	}
	
	
	void Union(int hA,int hB)
	{
		
		if(Set[hA]<Set[hB])      //if A has more elements
		{
			Set[hA]=Set[hA]+Set[hB];
			Set[hB]=hA;
		}	
		else
		{
			Set[hB]=Set[hA]+Set[hB];
			Set[hA]=hB;
		}

	}
	


int main()
{
	int min;
	int n=8;   //number of edges
	int minj=0;
	int Pa,Pb;
	int Ti=0;
	

	
	for(int i=0;i<n;i++)
	{
	
		min=I;
		
		for(int j=0;j<=n;j++)
		{
			if(Graph[j][2]<min)
			{
				if(included[j]==1)
				continue;
				min=Graph[j][2];
				minj=j;
				
			}
			
		}
		
		if(included[minj]==1)
		continue;
		
		else
		{
			included[minj]=1;
		}
		
		Pa=find(Graph[minj][0]);
		Pb=find(Graph[minj][1]);
		
		if(Pa==Pb)
		continue;
		
		else
		{
			
			
			Union(Pa,Pb);   
			SpanningTree[Ti][0]=Graph[minj][0];
			SpanningTree[Ti][1]=Graph[minj][1];
			Ti++;
		}
		
		
	}
	

	for(int i=0;i<n-2;i++)	
	{
		cout<<SpanningTree[i][0]<<" to "<<SpanningTree[i][1]<<endl;
	}
	
	


	return 0;

}

