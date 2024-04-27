#include<bits/stdc++.h>
using namespace std;
bool shifou[10000011];
int n,x,kexing[10000011],is;
vector <int> a;
bool check(int x){
	while(x){
		if(x%10==7)
			return 1;
		x/=10;
	}
	return 0;
}
int main(){
	for(int i=1;i<=10000011;i++){
		if(shifou[i])
			continue;
		if(check(i)){
			for(int j=i;j<=10000011;j+=i)
				shifou[j]=1;
			continue;
		}
		kexing[is]=i;
		is=i;
	}
	cin>>n;
	for(int i=1;i<=n;i++){
	    cin>>x;
		if(shifou[x])
			a.push_back(-1);
		else
			a.push_back(kexing[x]);
	}
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<endl;
	}
	return 0;
}