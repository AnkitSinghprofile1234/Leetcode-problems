class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(!st.empty() && st.top() == s[i]){
                st.pop();
           } else{
            st.push(s[i]);
            }
            }
            string sr = "";
        while(!st.empty()){
            sr.push_back(st.top());
            st.pop();
        }
        reverse(sr.begin(), sr.end());
        return sr;
    }
};