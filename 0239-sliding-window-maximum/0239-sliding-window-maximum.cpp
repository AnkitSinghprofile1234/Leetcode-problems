class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
   deque<int> window;
   vector<int> maxInWindows;

   for (int i = 0; i < arr.size(); i++) {
   if (!window.empty() && window.front() <= i - k)
    window.pop_front();

while (!window.empty() && arr[window.back()] < arr[i])
    window.pop_back();

 window.push_back(i);

if (i >= k - 1)
 maxInWindows.push_back(arr[window.front()]);
        }

        return maxInWindows;
    }
};
