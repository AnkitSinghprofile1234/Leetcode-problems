class Solution {
public:
    bool isVowel(char c) {
         c = tolower(c);
        return c=='a'|| c=='e'||c=='i'||c=='o'||c=='u';
    }
    string reverseVowels(string s) {
        int i = 0;
        int j = s.size() - 1;
         while(i < j) {
        for(; i < j && !isVowel(s[i]); i++);
          for(; j > i && !isVowel(s[j]); j--);
         if(i < j) {
            char temp = s[j];
                s[j] = s[i];
                s[i] = temp;
                i++;
                j--;
              }
        }
        return s;
    }
};