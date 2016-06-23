#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	char c;
	int k1=0;
	int c1=0;
	int l=s.size();
	int i=0;
	while(i<l)
	{
		if(s[i]==s[i-1])
		{
			c1=c1+1;
			if(k1==0)
			{
				i=i+1;
			}
			if(k1>0)
			{
				s.erase(s.begin()+i);
				l=l-1;
			}
			if(c1>=1)
			{
				k1=k1+1;
			}
		}
		else
		{
			i=i+1;
		}
	}
	cout<<s<<'\n';
	return 0;
}
