#include<bits/stdc++.h>
using namespace std;

const int n=132;
int a[n];

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        char k;
        cin>>s>>k;
        for(int i=0;i<n;i++)
        {
            a[i]=0;
        }
         for(int i=0;i<s.size();i++)
         {
            int x=s[i];
            a[x]=a[x]+1;
         }
         int y=k;
         cout<<a[y]<<endl;
    }
    }

