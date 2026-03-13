class Solution {
public:
  bool check(string &s,int low,int high){
    if(low >= high) return true;

    // we will skip the , and space between the string for the left side of the string
    if(!isalnum(s[low])){
    return check(s,low+1,high);
    }

 // we will skip the , and space between the string for the right side of the string
      if(!isalnum(s[high])) return check(s,low,high-1);

  if(tolower(s[low]) != tolower(s[high])){
    return false;
  }
    return check(s,low+1,high-1);

  }
    bool isPalindrome(string s) {
        return check(s, 0, s.length() - 1);
    }
};