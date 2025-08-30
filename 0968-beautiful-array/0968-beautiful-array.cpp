class Solution {
public:
    vector<int> beautifulArray(int n) {
     vector<int> result = {1};

        while (result.size() < n) {
            vector<int> next;
            for (int x : result) {
                if (2 * x - 1 <= n)
                    next.push_back(2 * x - 1);
            }
            for (int x : result) {
                if (2 * x <= n)
                    next.push_back(2 * x);
            }
            result = move(next); 
        }

        return result;
    }
};