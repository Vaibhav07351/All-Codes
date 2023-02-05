#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define mod1 998244353
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define check(n) for(auto it:n)cout<<it<<" ";\
cout<<endl
#define speedup                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
// #define int long long int

 const int sz = 1e6;
 bool isPrime[sz + 1];
 
void sieve()  //for prime number knowing. Precalculated
{
    memset(isPrime, true, sizeof(isPrime));
 
    isPrime[0] = isPrime[1] = false;
 
    for (int i = 2; i * i <= sz; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < sz; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

void primeFactors(int n)  //pf of n=315  are  3 3 5 7
{
    int c=2;
    while(n>1)
    {
        if(n%c==0){
        cout<<c<<" ";           //change here
        n/=c;
        }
        else c++;
    }
}

void printDivisors(int n)   //all divisor of a num from 1 to n 
{                           //The divisors of 100 are: 1 100 2 50 4 25 5 20 10 
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            if (n/i == i)
                {
                    cout <<" "<< i;        //change here
                }
            else
                {
                    cout << " "<< i ;      //change here
                    cout<< " " << n/i;     //change here
                }
        }
    }
}

static bool comp(pair<int,int>&p1,pair<int,int>&p2)
{
    if(p1.first==p2.first)
    return p1.second<p2.second;  //ascending
    
    return p1.first<p2.first;   //ascending

}

static bool comp2(vector<int>&a1,vector<int>&a2)//sort vec in inc order based on2nd ind
{
    if(a1[1]==a2[1])
    return a1[0]<a2[0];

    return(a1[1]<a2[1]);  //2nd index ascending
}

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

 

void solve()
{
    long long int a,b,c,t,n,x,y,z,k,val; 
    cin>>n;
    long long int cnt=0;    
    while(n!=1)
    {
        while(n>1 && n%3==0)
        {
                n/=3;
                cnt++;
        }
        if(n>1 && n%3==1)
        {
            n-=1;
            cnt++;
        }
        // else if(n>1 && (n-2)>1 &&  n%3==2)
        // {
        //     n-=2;
        //     cnt+=2;
        // }
        
        else if(n>1 && n%2==0)
        {   

                n/=2;
                cnt++;
        }
        else if(n>1)
        {
            n-=1;
            cnt++;
        }
    }
   
    cout<<cnt<<endl;

}



int main() 
{
    long long int t;
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif // ONLINE_JUDGE
    cin>>t;
    
    while(t--)
    {
        solve();
    }
    
    return 0;
    
}