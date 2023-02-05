#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--) 
	{
	    int n,a,b;
	    cin>>n>>a>>b;
	    int arr1[n];
	    int i=n-1;
	    for(int k=0;k<n;k++){
	        arr1[k]=i*a+k*b;
	        i--;
	    }
	    sort(arr1,arr1+n);
	    int l=arr1[0];
	    int arr2[n],r=0;
	    arr2[r]=arr1[r];
	    r++;
	    for(int v=1;v<n;v++){
	        if(l!=arr1[v]){
	            arr2[r]=arr1[v];
	            r++;
	            l=arr1[v];
	        }
	    }
	    for(int i=0;i<r;i++){
	        cout<<arr2[i]<<" ";}
	        cout<<endl;
	        
	}
    return 0;
}
