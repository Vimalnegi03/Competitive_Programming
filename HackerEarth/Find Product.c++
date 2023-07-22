#include <bits/stdc++.h>
using namespace std;
int main() {
 int M=1e9+7;
	int num;
	cin>>num;
	int a[num];
	for(int i=0;i<num;i++)
	{
		cin>>a[i];
	}
	long long p=1;
	for(int i=0;i<num;i++)
	{
		p=((p*a[i]) % M);
	}
	cout<<p<<endl;
}