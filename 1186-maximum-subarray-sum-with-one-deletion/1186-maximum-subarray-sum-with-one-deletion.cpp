class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int len = arr.size();
        int maxsum = arr[0];
        int prevwithdelete = 0;
        int prevwithoutdelete = arr[0];
    for(int i =1;i<len;i++){
         prevwithdelete = max(prevwithoutdelete,prevwithdelete+arr[i]);
        prevwithoutdelete = max(prevwithoutdelete+arr[i],arr[i]);
       int current = max(prevwithoutdelete,prevwithdelete);
        maxsum = max(maxsum,current);
    }
    return maxsum;
    }
};