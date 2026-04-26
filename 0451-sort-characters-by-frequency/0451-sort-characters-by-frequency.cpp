class Solution {
public:
    string frequencySort(string s) {
        int k = s.size();
       unordered_map<char,int>mp;
       for(int i=0;i<s.size();i++){
        mp[s[i]]++;
       }
       priority_queue<pair<int,char>>pq;
       for(auto it:mp){
           pq.push({it.second,it.first});
       }
       string ans = "";
       while(!pq.empty()){
       auto it = pq.top();
         pq.pop();
    
     int freq = it.first;
    char ch = it.second;
    
    while(freq--){
        ans.push_back(ch);
       }
    }
    return ans;
    }
};


