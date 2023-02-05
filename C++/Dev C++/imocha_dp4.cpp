#include<iostream>
#include<vector>
using namespace std;
 
 
int getSum(int n) {
       
        vector<vector<int>>tri={{},{1}};
        for(int i=2;i<=n;++i){
            vector<int>temp;
            temp.insert(temp.begin(),1);
            temp.push_back(1);
            for(int j=1;j<i-1;++j){
                 int a=tri[i-1][j-1];
                 int b=tri[i-1][j];
                 temp.insert(temp.begin()+j,a+b);
            }
            tri.push_back(temp);
           
        }
        tri.erase(tri.begin());
       
        int ans=0;
        for(auto &it:tri){
            for(auto &i:it)ans+=i;
        }
        return ans;
       
}
 
int main()
{
    system("cls");
    int n;
    int t=12;
    while(t--)
    {
    cin>>n;
    
    cout<<getSum(n);
    cout<<endl<<endl;
    }
 
    return 0;
}
