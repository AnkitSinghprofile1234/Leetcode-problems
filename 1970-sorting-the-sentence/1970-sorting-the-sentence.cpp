class Solution {
public:
    string sortSentence(string s) {
        vector<string> ans(10); // max 9 words can be there given in question.
        string temp = "";
        int index = 0, count = 0;

        while (index < s.size()) {
            if (s[index] == ' ') {
                int pos = temp.back() - '0'; // last char is position ,as it gives the position of the word in the sentence eg. in this1 it is first position.
                temp.pop_back();             // remove digit, we eill remove the last digit position.
                ans[pos] = temp;             // store word at correct pos
                temp.clear();                // reset for next word
                count++;
            } else {
                temp += s[index];
            }
            index++;
        }

        // to handle last word
        int pos = temp.back() - '0';
        temp.pop_back();
        ans[pos] = temp;
        count++;

        //final sentence
        string result = "";
        for (int i = 1; i <= count; i++) {
            result += ans[i];
            if (i != count)
                result += " ";
        }

        return result;
    }
};