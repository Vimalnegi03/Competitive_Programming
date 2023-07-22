#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int s=0;
		int k=0;
		int a,b;
		cin>>a>>b;
		int n;
		cin>>n;
		int c[n];
		int d[n];
		for(int i=0;i<n;i++)
		{
			cin>>c[i];
		
		
			cin>>d[i];
		}
		for(int i=0;i<n;i++)
		{
			s=s+ c[i]*b +(d[i]*a);
		}
		for(int i=0;i<n;i++)
		{
			k=k+ c[i]*a +(d[i]*b);
		}
		if(s<=k)
		cout<<s<<endl;
		else
		cout<<k<<endl;
	}
}