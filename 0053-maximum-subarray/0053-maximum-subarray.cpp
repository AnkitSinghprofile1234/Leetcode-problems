class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int currentsum = nums[0];
       int maxsum = nums[0];
       for(int i =1;i<nums.size();i++){
        int v1 = currentsum + nums[i];
        int v2 = nums[i];
        currentsum = max(v1,v2);
       maxsum = max(maxsum,currentsum);
       }
       return maxsum;
    }
};