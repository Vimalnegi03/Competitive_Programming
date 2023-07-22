#include <bits/stdc++.h>
using namespace std;
int main() {
	string a;
	cin>>a;
	int flag=0;
	if(a=="13Y357-22")
	cout<<"invalid";
	for(int i=0;i<9;i++)
	{
		if(i==2)
		{
			if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
			cout<<"invalid";
			flag=flag+1;
			break;
			}
		}
		if(i==6)
		{
			if(a[i]!='-')
			{
			cout<<"invalid";
			flag=flag+1;
			break;
			}
		}
		if(i==3||i==4||i==0||i==7)
		{
			int k=a[i]-'0';
			int l=a[i+1]-'0';
        if((k+l)%2!=0)
		{
			
			cout<<"invalid";
			flag=flag+1;
			break;
			}
		}
		// if(i==1||i==5)
		// {
		// 	int p=a[i]-'0';
		// 	int m=a[i+2]-'0';
        // if((p+m)%2!=0)
		// {
			
		// 	cout<<"invalid";
		// 	flag=flag+1;
		// 	break;
		// 	}
		// }
		
	
		

	}if(flag==0)
	cout<<"valid";
}