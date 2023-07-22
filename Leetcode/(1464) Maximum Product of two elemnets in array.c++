class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=nums.size()-1;
        int b=a-1;
        return (nums[a]-1)*(nums[b]-1);
    }
};