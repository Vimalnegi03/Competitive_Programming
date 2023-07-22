#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;    
	while(t--)
	{
	int n,m;
	cin>>n>>m;
	vector<int>v(m);
	for(int i=0;i<m;i++)
	{
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	int sum=0;
	int count=0;
	for(int i=0;i<m;i++)
	{
		if(sum+v[i]<=n)
		{
			sum=sum+v[i];
			count =count+1;

		}
		}
		cout<< count<<endl;
		}
		
}