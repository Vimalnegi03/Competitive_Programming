#include<bits/stdc++.h>
class Solution {
public:
    int maxProfit(int a[]) {
      int profit=0;int min=a[0];
      for(int i=1;i<sizeof(a)/sizeof(*a);i++)
      {
       profit=max(profit,a[i]-min);
       min=min(min,a[i]);
    }
    return profit;
}
} 