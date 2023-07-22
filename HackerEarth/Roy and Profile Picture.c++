#include <iostream>
using namespace std;
int main() {
	int l;
	cin >> l;  
	int n;
	cin>>n;
	while(n--)
	{
		int w,h;
		cin>>w>>h;
		 if(w<l||h<l)
		{
			cout<<"UPLOAD ANOTHER"<<endl;
		}
		else if(l*l==w*h ||w==h)
		{
			cout<<"ACCEPTED"<<endl;
		}
		else
		cout<<"CROP IT"<<endl;
	}  
	
}