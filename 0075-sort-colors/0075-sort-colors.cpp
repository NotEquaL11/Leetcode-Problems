class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int keys=nums[i];
            int j=i-1;

            while(j>=0 && nums[j]>keys)
            {
                nums[j+1]=nums[j];
                j--;
            }
            nums[j+1]=keys;
        }
        
        
    }
};