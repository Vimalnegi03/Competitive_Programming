class Solution {
    public boolean isPalindrome(String s) {
        String str=s.toLowerCase();
        int x=str.length();
        String ax="";
        String ay="";int y;int k=0;
        for(int i=0;i<x;i++)
        {
            char ch= str.charAt(i);
            if((ch>=97&&ch<=122)||(ch>=48&&ch<=57))
            {
                // k=k+1;
                ax=ax+ch;
                ay=ch+ay;
            }
        }
        if(ay.equals(ax))
        return true;
        else
        return false;
    }
}