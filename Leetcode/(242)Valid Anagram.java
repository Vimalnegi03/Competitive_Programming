class Solution {
    public boolean isAnagram(String s, String t) {
        char tempArray[] = s.toCharArray();
 int j=0;
        // Sorting temp array using
        Arrays.sort(tempArray);
 char tempArray1[] = t.toCharArray();
 
        // Sorting temp array using
        Arrays.sort(tempArray1);
        if(s.length()!=t.length())
        return false;
        else
        {
        for(int i=0;i<s.length();i++)
        {
            if(tempArray[i]!=tempArray1[i])
            {
                j=j+1;
            }
        }
        }
        if(j==0)
        return true;
        else
        return false;
        
    }
}