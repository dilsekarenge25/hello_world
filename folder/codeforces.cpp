#include<bits/stdc++.h>
using namespace std;
 
#define int  long long int
 
#define PB push_back
#define MP make_pair
#define S second
#define F first
#define Dbg cout<<"*\n";
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define mod 1000000007 
#define inf 1e18+7;
#define masking 4294967295
const double pi = 3.14159265358979323846; 

signed main()
{
    fast
    int t=1;
   cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        int arr[n];
     int count[100005]={0};
     int mx=0;
        for(int i=0;i<n;i++)
		{
		  cin>>arr[i];
		  count[arr[i]]++;
		  if(count[arr[i]]>mx)
		  mx=count[arr[i]];
	    }
	    int c=0;
        for(int i=1;i<=n;i++)
        {
        	if(count[i]==mx)
        	c++;
		}
		int nn=n-mx*c+mx;
	    if(mx!=2)
	    {
        cout<<(nn/mx)-1+c-1<<"\n";
        continue;
        }
        
		int tt=ceil((double)n/mx)-1;
		int p=n-(tt+2)-(c-1);
		cout<<tt+p<<"\n";
    }
    
	return 0;
}
	


