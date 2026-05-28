class Solution {
public:
    int maxProfit(vector<int>& prices){
        int l=0, r=1;
        int ans=0;
        int profit;
        while(r<prices.size()){
            // if right > left
            if(prices[r]>prices[l]){
                profit = prices[r] - prices[l];
                ans = max(profit,ans);
            }
            // if left > right
            else{
                l = r;
            }
            r++;
        }
        return ans;
    }
};