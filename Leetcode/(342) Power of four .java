class Solution {
    public boolean isPowerOfFour(int n) {
         int y=n; int s=1;
         if(n==1)
         {
             return true;
            
         }
        else 
        {
            while(y>1)
            {
                if(y%4==0)
                {
                    s=s*4;
                    y=y/4;
                }
                else
                return false;
            }

        }
        if(s==n)
        return true;
        else 
        return false;
    }
}