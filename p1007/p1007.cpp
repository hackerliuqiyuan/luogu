#include<bits/stdc++.h>
using namespace std;
int n,l,min1=0,max1=0;
int main()
{
	cin>>l>>n;
	for(int i=1;i<=n;i++)
	{
		int temp;
		cin>>temp;
		min1=max(min(l+1-temp,temp),min1);
		max1=max(max(l+1-temp,temp),max1);
	}
	cout<<min1<<' '<<max1;
}