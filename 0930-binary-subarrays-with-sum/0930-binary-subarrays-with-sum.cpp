class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        if(goal == 0){
            int count = 0, curr = 0;
            for(int x : nums){
                if(x == 0){
                    curr++;
                    count += curr;
                } else {
                    curr = 0;
                }
            }
            return count;
        }
        
        int n = nums.size();
        int low=0;
        int count=0;
        int sum = 0;
        for(int high = 0;high<n;high++){
            sum = sum + nums[high];

            while(sum > goal){
                sum -= nums[low];
                low++;
            }

            if(sum == goal){
                int temp = low;

            while(temp <= high && nums[temp] == 0){
                count++;
                 temp++;
                  }
                count++;
            }
           
        }
         return count;
    }
};



    