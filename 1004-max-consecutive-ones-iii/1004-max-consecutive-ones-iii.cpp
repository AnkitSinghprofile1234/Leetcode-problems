class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int low=0;
        int maxlength = 0;
        int n = nums.size();
        int zerocount = 0;
        for(int high=0;high<n;high++){
           if(nums[high]==0){
            zerocount++;
           }
           while(zerocount>k){
            if(nums[low]==0){
                zerocount--;
            }
            low++;
           }
            maxlength=max(maxlength,high-low+1);
        }
        return maxlength;
    }
};