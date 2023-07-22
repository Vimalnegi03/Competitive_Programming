class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        int a=0;
        sort(nums.begin(),nums.end());
        int b=nums.size()-1;
        while(a<b)
        {
            if(nums[a]==nums[a+1])
            {
                return true;
            }
            else
            {
                a=a+1;
            }
        }
        return false;
    }
};