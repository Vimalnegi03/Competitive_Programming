#include<bits/stdc++.h>
using namespace std;

int solve (int N) {
    
   int max=0;
    
    
       
        for(int i=0;i<N;i++)
        {
          if(pow(2,i)<=N)
          {
            max=pow(2,i);
            }
            else
            {
            break;
            }
          
        }
        return max;
   
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;

        int out_;
        out_ = solve(N);
        cout << out_;
        cout << "\n";
    }
}