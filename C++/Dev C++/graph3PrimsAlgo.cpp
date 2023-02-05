#include<bits/stdc++.h>
#define int long long int
using namespace std;

#define I INT_MAX

int Graph[][8]=
{{I,I,I,I,I,I,I,I},
{I,I,25,I,I,I,5,I},
{I,25,I,12,I,I,I,10},
{I,I,12,I,8,I,I,I},
{I,I,I,8,I,16,I,14},
{I,I,I,I,16,I,20,18},
{I,5,I,I,I,20,I,I},
{I,I,10,I,14,18,I,I}};

int NearerEdge[8]={I,I,I,I,I,I,I,I};
int SpanningTree[2][7];

signed main()
{
	int n=8;
	int min=32768, minR,minC;
	for(int i=1;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(Graph[i][j]<min)
			{
				min=Graph[i][j];
				minR=i;
				minC=j;
			}
		}
	}
	
	
	SpanningTree[0][0]=minR;
	SpanningTree[1][0]=minC;	
	
	NearerEdge[minR]=0;
	NearerEdge[minC]=0;
	
	
	for(int i=1;i<n-2;i++)
	{
		
		min=32768;

		
		for(int j=1;j<n;j++)
		{
			if(NearerEdge[j]!=0 )
			{
				if(Graph[minR][j]<Graph[minC][j])
				NearerEdge[j]=minR;
				else
				NearerEdge[j]=minC;	
			}
			
		}
		
		
		for(int j=1;j<n;j++)
		{
			if(NearerEdge[j]!=0 )
			{
				if(Graph[j][NearerEdge[j]]<min)
				{
					min=Graph[j][NearerEdge[j]];
					minR=j;
				//	minC=NearerEdge[j];                                   //otherwise upper loop disturbed with minc start comparing to 1 instead of 7
				}
				
				
			}
			
		}
		
		SpanningTree[0][i]=minR;
		SpanningTree[1][i]=NearerEdge[minR];              //got rid of minC direct use minr so that upper code not disturbed
		
		NearerEdge[minR]=0;

	
	}
	
	
	for(int i=0;i<6;i++)
	{
		cout<<SpanningTree[0][i]<<" to "<<SpanningTree[1][i]<<endl;
	}
	
	
	
	
	


	return 0;
}

