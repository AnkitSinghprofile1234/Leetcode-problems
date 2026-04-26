class Solution {
public:
int sum =0;
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(int i =0;i<piles.size();i++){
            pq.push(piles[i]);
        }
        int ans;
        vector<int>full;
        while(k--){
         ans = pq.top()-(pq.top()/2);
         pq.pop();
         pq.push(ans);
        }
        while(!pq.empty()){
            full.push_back(pq.top());
            pq.pop();
        }
        for(int j = 0;j<full.size();j++){
        sum = sum + full[j];
        }
        return sum;
    }
};