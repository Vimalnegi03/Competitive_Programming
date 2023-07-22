class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a=0;
        int b=nums.size()-1;
        int i=0;
        while(a<=b)
        {
            if(nums[a]==2)
            {
                int temp=nums[a];
                nums[a]=nums[b];
                nums[b]=temp;
                // a++;
                b--;
            }
            else if(nums[a]==0)
            {
                swap(nums[a],nums[i]);
                a++;
                i++;
            }
            else
            {
                a++;
                
            }
        }
        cout<<&nums;
    }
};