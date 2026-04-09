class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> mp;
        int low = 0, maxLen = 0;

        for(int high = 0; high < fruits.size(); high++) {
            mp[fruits[high]]++;  // add fruit

            while(mp.size() > 2) {  // more than 2 types
                mp[fruits[low]]--;
                if(mp[fruits[low]] == 0)
                    mp.erase(fruits[low]);
                low++;
            }

            maxLen = max(maxLen, high - low + 1);
        }

        return maxLen;
    }
};