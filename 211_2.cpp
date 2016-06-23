#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	int a[500008];
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int sum[500008];
	sum[-1]=0;
	memset(sum,0,sizeof(sum));
	for(int i=0;i<n;i++)
	{
		sum[i] = sum[i-1] + a[i];
	}
	for(int i=0;i<n;i++)
	{
		//cout<<sum[i]<<" ";
	}
	int j=0,ans;
	int min1=99999999;
	for(int i=k-1;i<n;i++)
	{
		if(min1>=(sum[i]-sum[i-k]))
		{
			min1=(sum[i]-sum[i-k]);
		//	cout<<min1;
			ans=(i-k)+1;
		}
		

	}
	//cout<<min1;
	cout<<ans+1;
	return 0;
}
