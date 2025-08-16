class Solution {
public:
    int arrayNesting(vector<int>& nums) {

        int n = nums.size();
        vector<bool> visited(n, false);
        int maxLen = 0;
        for (int i = 0; i < n; i++) {
        if (!visited[i]) {
        int start = i;
        int length = 0;
        while (!visited[start]) {
        visited[start] = true;
        start = nums[start]; // next index par jao
        length++;
        }
        maxLen = max(maxLen, length);
        }
        }
        return maxLen;
        

      }  
    
};