class Solution {
public:
    string longestNiceSubstring(string s) {
      if (s.size() < 2) return "";
        unordered_set<char> st(s.begin(), s.end());
        for (int i = 0; i < s.size(); i++) 
          if (!st.count(tolower(s[i])) || !st.count(toupper(s[i]))) 
           return max(longestNiceSubstring(s.substr(0, i)),
            longestNiceSubstring(s.substr(i + 1)),
          [](auto &a, auto &b){ return a.size() < b.size(); });
        return s;  
    }
};