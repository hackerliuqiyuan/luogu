#include<bits/stdc++.h>
using namespace std;
int i,j,n;
long long dp[1001];
bool b[1001];
void prime(){//找
	for(i=2;i<=500;i++){
		if(b[i]==0){
			for(j=2;i*j<=1000;j++){
				b[i*j]=1;
			}
		}
	}
}
int main()
{	prime();
	cin>>n;
	dp[0]=1;
	for(i=2;i<=n;i++)
		if(b[i]==0){
		    for(j=i;j<=n;j++){
			    dp[j]+=dp[j-i];
		    }
		}
		
	cout<<dp[n];
  	return 0;
}
