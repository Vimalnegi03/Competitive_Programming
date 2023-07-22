// int move(int num)
// {
//     if(num==0||num==1||num==2)
//     {
//         return num;
//     }
//     else
//     return move(num-1)+move(num-2);
// }

class Solution {
public:
    int climbStairs(int n) {
        // int a =move(n);
        int a=0;int b=1;int c=2;
       if(n==0)
       {
           return 0;
       }
       if(n==1)
       {
           return 1;
       }
       if(n==2)
       {
           return 2;
       }
        for(int i=0;i<=n-3;i++)
        {
           a=b+c;
           b=c;
           c=a;
        }
    
    return a;}
};