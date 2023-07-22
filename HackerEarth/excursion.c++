#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k;
		cin>>n>>m>>k;
		int a=0;
		int b=0;
		if(n%k==0)
		{
			a=n/k;
		}
		else
		{
		a=floor(n/k)+1;
		}
		if(m%k==0)
		{
			b=m/k;
		}
		else
		{
		b=floor(m/k)+1;
		}
		cout<<a+b<<endl;
	}
}