#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'gameOfThrones' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string gameOfThrones(string s) 
{
    vector<int> arr(26,0);
    for(int i=0;i<s.length();i++)    
    {        
       arr[s[i]-'a']++; 
    }    
    int flag=0,flag1=0;
	char k='a';
	for(int i=0;i<26;i++)    
    {        	
       cout<<"i="<<k<<"  "<<arr[i]<<" ";
       if(i%5==0)
       cout<<endl;
	   k++; 
    }   
	cout<<endl<<endl;
    if(s.length()%2==1)
    {
        for(int i=0;i<26;i++)
        {	
        	cout<<i<<arr[i]<<" ";
            if(arr[i]%2==1)   
            {	
            	cout<<i<<" here";
               if(flag==1)
               {
                   flag1=1;
                   break;
               }
               
               flag=1;
               //break; 
            }
            
        } 
    }   
    cout<<endl<<flag1;
    if(s.length()%2==0)
    {
        for(int i=0;i<26;i++)
        {
            if(arr[i]%2==1)   
            {
               flag1=1;
               break; 
            }
            
        }    
            
    } 
     
     if(flag1==1)
     return "NO";
     else
     return "YES";    
            
    
        
        
        
        
    
    
        
        
        
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

