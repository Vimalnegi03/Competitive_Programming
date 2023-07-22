#include <iostream>
using namespace std;
int main() {
	string s;
	cin>>s;
	int a=s.size();
	string k="";
	string str=s;
	for(int i=a-1;i>=0;i--)
	{
     k.push_back(s[i]);
	}
	if(k==str)
	cout<<"YES";
	else
	cout<<"NO";
}