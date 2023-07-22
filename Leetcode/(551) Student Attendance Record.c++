class Solution {
public:
    bool checkRecord(string s) {
        string j="";
        int n=s.size();
        
        int h=0;
        if(n==2)
        {
            if(s[0]=='A'&& s[1]=='A')
            return false;
        }
        if(n>2)
        {
       for(int i=0;i<s.size()-1;i++)
       {
           if(s[n-1]=='L'&& s[n-2]=='L' && s[n-3]=='L')
           {
             return false;
           }
           
          else if(s[i]=='L'){
               int l=0;
                if(s[i+1]=='L'&& s[i+2]=='L')
           {
             return false;
           }
          
           }
          else if(s[i]=='A')
           {
               h=h+1;
               
               if(h==2)
               return false ;
           }
           else
           {
              
           }
       }
        }
       return true;

        
    }
};