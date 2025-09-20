// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1, high = n;
        while(low < high){
        int mid = low + (high - low)/2;  //we have done this as if we directly take (low+mid/2) the value which we will get will be very large more than the value of n. which will overflow the value of n. 
          if(isBadVersion(mid)){
            high = mid;  // first bad could be here or before
          }
          else {
            low = mid +1;
          }
        }
        return low;
    }
};