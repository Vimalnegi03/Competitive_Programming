#include <iostream>

using namespace std;

const int n = 132;

int a[n];

int main(){ 
int t;
cin>>t;
while(t--)
{
	for(int i=0;i<n;i++)
	{
		a[i]=0;
	}  
	string s;
	cin>>s;
	int flag=0;
	for(int i=0;i<s.size();i++)
	{
		int x=s[i];
		a[x]=a[x]+1;
	}
	for(int i=97;i<122;i++)
	{
		if(a[i]>1)
		{
			cout<<"Yes"<<endl;
			flag=flag+1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"No"<<endl;
	}
}
}
