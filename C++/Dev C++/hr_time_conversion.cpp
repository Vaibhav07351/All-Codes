#include <bits/stdc++.h>

using namespace std;

int main()
{
    string inp_time,out_time="00:00:00";
    int hr=00,i=0;
    
    getline(cin,inp_time);

    if(inp_time[8]=='P')
    {
        for(char ch='0',i=0;ch<='9';ch++,i++)
        {
            if(inp_time[1]==ch)
            hr= 12 + i;
        }
        
        if(inp_time[0]=='1' && inp_time[1]=='2')
            hr= 12 ;
            
        if(hr>9)
        {
            out_time[0]='1';
            
            for(char ch='0',i=0;ch<='9';ch++,i++)
            {
                if(inp_time[1]==ch)
                out_time[1]=i;
            }
        
            
        }    
            
    }
        
    
    if(inp_time[8]=='A')
    { 
        
        for(char ch='0',i=0 ;ch<='9';ch++,i++)
        {
            if(inp_time[1]==ch)
            hr= i;
        }
        
       
        if(inp_time[0]=='1'&& inp_time[1]=='2')
        hr=00;
        
    }
     
     if(hr>9)
     cout<<hr<<":"<<inp_time[3]<<inp_time[4]<<":"<<inp_time[6]<<inp_time[7];
    if(hr<9)
     cout<<"0"<<hr<<":"<<inp_time[3]<<inp_time[4]<<":"<<inp_time[6]<<inp_time[7];
    
       

    
    
    
    
    return 0;
}
 

