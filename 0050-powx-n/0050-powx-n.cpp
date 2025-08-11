class Solution {
public:
    double myPow(double x, int n) {
        
        long binform = n; // long isliye taki value bhot bda na ho eg 2^30 bhot bda value hai jo int me store nhi hoga.

        if(binform < 0){ // agar exponent negative hai
            x = 1/x;  // base ka reciprocal le liye.
            binform = -binform; //here i have stored binform as the power  eg. 2^3 so here 3 is binform.
        }
        double ans = 1;

        while(binform > 0){
            if(binform %2 == 1){ // agar last bit 1 hai
                ans *= x; // Multiplication ka neutral element hota hai 1 (jaise addition ka neutral element 0 hota hai).
            }
            x *= x;
            binform /= 2;
        }
        return ans;
    }
};