class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low=0;
        int minlength = INT_MAX;
        int sum =0;
        int n = nums.size();
        for(int high=0;high<n;high++){
            sum = sum + nums[high];

            while(sum>=target){
                minlength = min(minlength,high-low+1);
                sum = sum - nums[low];
                low++;
            }
        }
        if(minlength == INT_MAX) return 0;
          return minlength;
    }
};