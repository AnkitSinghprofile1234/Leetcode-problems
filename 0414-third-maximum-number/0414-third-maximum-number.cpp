class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> top3distinct;
        for(int i=0; i<nums.size();i++){
         top3distinct.insert(nums[i]);
         if(top3distinct.size() > 3){
            top3distinct.erase(top3distinct.begin());
         }
        }
         if(top3distinct.size() == 3){
            return *top3distinct.begin();
        }


       else{
            return *top3distinct.rbegin();
        }

    }
};