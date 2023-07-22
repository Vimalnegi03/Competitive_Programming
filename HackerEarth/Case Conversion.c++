#include<bits/stdc++.h>
using namespace std;



int main() {

   int t;
   cin>>t;
   while(t--)
   {
    string s;
    cin>>s;
    int y=0;
    string k="";
 for(int i=0;i<s.size();i++)
 { 
     y=s[i];

    if((i>0) && (y>=65&&y<=90))
    {
        y=y+32;
        s[i]=y;
        k=k +"_"+s[i];
    }
   else if((i==0) && (y>=65&&y<=90))
    {
        y=y+32;
        s[i]=y;
        k=s[i];
    }
    else
    {
        k=k+s[i];
    }
 }
  cout<<k<<endl;
   }
}