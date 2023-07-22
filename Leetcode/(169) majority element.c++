class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int k=ceil(nums.size()/2);
        sort(nums.begin(),nums.end());
        int a=0;
        int b=nums.size()-1;
        int count =1;
        if(nums.size()==1)
        {
            return nums[0];
        }
        while(a<b)
        {
            if(nums[a]==nums[a+1])
            {
                count =count +1;
            if(count>k)
            {
                return nums[a];
            }
                a=a+1;
            }
            else
            {
                a=a+1;
                count =1;
            }
        }return 0;
    }
};