class Solution {
    public int reverse(int x) {
        int s=0;
        int j=x;
        while(j!=0)
        {
            int y=j%10;
          if((s>2147483647/10)||(s<-2147483648/10))
          {
              return 0;
          }
            s=(s*10)+y;
            j=j/10;

        }
      
return s;
        
}
}