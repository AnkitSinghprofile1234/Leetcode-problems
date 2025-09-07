class Solution {
public:
    string addStrings(string num1, string num2) {
       int i = num1.size() - 1, j = num2.size() - 1, carry = 0;
    string result = "";
    
    while(i >= 0 || j >= 0 || carry) {
        int n1 = i >= 0 ? num1[i--] - '0' : 0;
        int n2 = j >= 0 ? num2[j--] - '0' : 0;
        int sum = n1 + n2 + carry;
        carry = sum / 10;
        result = char(sum % 10 + '0') + result;
    }
    
    return result;
}

int main() {
    string num1 = "456", num2 = "77";
    cout << addStrings(num1, num2) << endl;
    return 0; 
    }
};