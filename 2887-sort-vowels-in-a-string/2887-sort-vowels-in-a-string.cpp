#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string sortVowels(string s) {
        vector<int> lower(26, 0);
        vector<int> upper(26, 0);

        // Step 1: Count vowels and mark them as '#'
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                lower[s[i] - 'a']++;
                s[i] = '#';
            }
            else if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                upper[s[i] - 'A']++;
                s[i] = '#';
            }
        }

        // Step 2: Extract vowels from lower and upper arrays into a single list
        vector<char> vowels;
        // Add uppercase vowels in order
        for(int i = 0; i < 26; i++) {
            char c = 'A' + i;
            while(upper[i] > 0) {
                vowels.push_back(c);
                upper[i]--;
            }
        }
        // Add lowercase vowels in order
        for(int i = 0; i < 26; i++) {
            char c = 'a' + i;
            while(lower[i] > 0) {
                vowels.push_back(c);
                lower[i]--;
            }
        }

        // Step 3: Sort vowels
        sort(vowels.begin(), vowels.end());

        // Step 4: Replace '#' in original string with sorted vowels
        int j = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '#') {
                s[i] = vowels[j++];
            }
        }

        return s;
    }
};
