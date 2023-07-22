class Solution {
    public boolean isUgly(int n) {
        int y=n;int k = Math.abs(y);
        int s=1;
        if(n==1)
        return true;
        if(n==-1)
        return false;
        while(y>1)
        {
            if(y%2==0)
            {
                s=s*2;
                y=y/2;
            }
          else  if(y%3==0)
            {
                s=s*3;
                y=y/3;
            }
           else if(y%5==0)
            {
                s=s*5;
                y=y/5;
            }
            else
            return false;


        }
        if(k==s)
        return true;
        else
        return false;
        
    }
}