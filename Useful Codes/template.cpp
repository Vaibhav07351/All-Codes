#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007  //1e9+7
#define mod1 998244353
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define check(n) for(auto it:n)cout<<it<<" ";\
cout<<endl
#define speedup                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define int long long int

 const int sz = 1e6;           //(5e6) check accn to given constraint in function
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

void primeFactors(int n,vector<int>&arr)  //pf of n=315  are  3 3 5 7
{
    int c=2;
    while(n>1)
    {
        if(n%c==0){
        // cout<<c<<" ";           //change here
        arr.push_back(c);
        n/=c;
        }
        else c++;
    }
}

void printDivisors(int n,vector<int>&arr)   //all divisor of a num from 1 to n 
{                           //The divisors of 100 are: 1 100 2 50 4 25 5 20 10 
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            if (n/i == i)
                {
                    // cout <<" "<< i;        //change here
                    arr.push_back(i);
                }
            else
                {
                    // cout << " "<< i ;      //change here
                    // cout<< " " << n/i;     //change here
                    arr.push_back(i);
                    arr.push_back(n/i);
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

int gcd(int a, int b)   //or HCF
{
    return b == 0 ? a : gcd(b, a % b);   
}

int lcm(int a, int b)  //or LCM
{
    return (a / gcd(a, b)) * b;
}

int powermod(int x, int y)
{
    int res = 1;     // Initialize result
 
    x = x % mod; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % mod;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % mod;
    }
    return res;
}

int pqinv(int p,int q)
{
    int  expo;
    expo = mod - 2;
 
    // Loop to find the value
    // until the expo is not zero
    while (expo) {
 
        // Multiply p with q
        // if expo is odd
        if (expo & 1) {
            p = (p * q) % mod;
        }
        q = (q * q) % mod;
 
        // Reduce the value of
        // expo by 2
        expo >>= 1;
    }
    return p;
}


void solve()
{
    int a,b,c,t,n,x,y,z,k,val;
    vector<int >arr,arr1;

    string s;
    
    cin>>n;
        
    for(int i=0;i<n;i++)
    {
        cin>>val;
        arr.push_back(val);
    }
    
    s		



}



signed main() 
{
    speedup;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    int t;

    cin>>t;
    
    while(t--)
    {
        solve();
    }
    
    return 0;
    
}