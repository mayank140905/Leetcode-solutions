class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i=0;
        int ans = nums[0];
        int bestending = nums[0];
        for (int i=1; i<nums.size();i++){
            int v1 = nums[i];
            int v2 = bestending+nums[i];
            bestending = max(v1,v2);
            ans = max(ans,bestending);
        }
        return ans;
    }
};