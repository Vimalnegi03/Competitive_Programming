class Solution {
    public boolean isPowerOfTwo(int n) {
        int s=1;int y=n;
    if(n==1)
    return true;
    while(y>1)
    {
        if(y%2==0)
        {
         y=y/2;
            s=s*2;
        }
        else 
        return false;
    }
    if(s==n)
    return true;
        else 
        return false;
    }
}