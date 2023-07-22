class Solution {
public:
    bool isPowerOfThree(int n) {
               int y=n;
        int s=1;
        if(n==1)
        return true;
        else
        {
            while(y>1)
            {
                if(y%3==0)
                {
                    s=s*3;
                    y=y/3;
                }
                else 
                return false;
            }
            
        }
        if(n==s)
        return true;
else
return false;
    }

    
};