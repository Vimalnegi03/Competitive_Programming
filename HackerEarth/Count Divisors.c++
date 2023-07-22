#include <iostream>
using namespace std;
int main() {
	int a;
	int b;
	int c;
	cin >>a>>b>>c;    
	int flag=0;
	for(int i=a;i<=b;i++)
	{
		if(i%c==0)
		flag=flag+1;
	}
	cout<<flag<<endl;
}