class Solution {
    public int lengthOfLastWord(String s) {
        int k=0;
        int m=0;
        String str =s.trim();
            String ax="";
        for(int i= str.length()-1;i>=0;i--)
        {
            char ch =str.charAt(i);
            if(ch!=32)
            {
                ax=ax+ch;
            }
            else
            break;


        }
       return ax.length();
       
    }
}