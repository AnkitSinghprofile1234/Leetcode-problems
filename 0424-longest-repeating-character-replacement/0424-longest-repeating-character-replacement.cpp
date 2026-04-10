class Solution {
public:
    int characterReplacement(string s, int k) {
        int low = 0;
        int maxfreq = 0;
        int maxlength = 0;
        unordered_map<char,int>freq;
        for(int high = 0;high<s.size();high++){
            freq[s[high]]++;
            maxfreq = max(maxfreq, freq[s[high]]);
            while((high-low+1)-maxfreq>k){
              freq[s[low]]--;
              low++;
            }
            maxlength = max(maxlength,high-low+1);
        }
        return maxlength;
    }
};