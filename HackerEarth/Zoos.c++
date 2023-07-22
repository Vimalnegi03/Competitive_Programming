#include <iostream>
using namespace std;
int main() {
	string n;
	cin >> n;   
	int z=0;
	int o=0; 
	for(int i=0;i<n.size();i++)
	{
		if(n[i]=='z')
		{
			z=z+1;
		}
		else
		{
			o=o+1;
		}
	}
	if(2*z==o)
	{
		cout<<"Yes";
	}
	else
	cout<<"No";
	
}