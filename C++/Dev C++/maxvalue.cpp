void solve()
{
	int a,b,t,n,x,y,z,k,val;
	vector<int >arr,arr1;
	string s;
	
	cin>>n;
	cin.ignore();
	cin>>s;

	int max0=INT_MIN , max1=INT_MIN;
	int cnt0=0,cnt1=0;
	for(int i=0;i<s.size();i++)
	{
		if(i==s.size()-1)
		{
			max0=max(max0,cnt0+1);
			max1=max(max1,cnt1+1);
		}


		if(s[i]=='0' &&s[i+1]=='0'  )
		cnt0++;
		if(s[i]=='0' &&s[i+1]=='1'  )
		{
			max0=max(max0,cnt0+1);
			cnt0=0;
		}

		if(s[i]=='1' &&s[i+1]=='1'  )
		cnt1++;
		if(s[i]=='1' &&s[i+1]=='0'  )
		{
			max1=max(max1,cnt1+1);
			cnt1=0;
		}


	}