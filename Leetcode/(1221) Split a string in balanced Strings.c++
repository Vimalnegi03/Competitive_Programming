class Solution {
public:
    int balancedStringSplit(string s) {
        int r=0;
        int count=0;
        int j=s.size()-1;
        for(int i=0;i<=j;i++)
        {
            if(s[i]=='R')
            {
             r=r+1;
            }
            else{
                r=r-1;
            }
            if(r==0)
            {
                count =count +1;
            }
        }
        return count;
    }
};