class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector <int> prefix(nums.size());
        for(int i=0;i<nums.size();i++){
            
            if(i == 0){
                prefix[i] = nums[i];
            }
            else{
            prefix[i] = prefix[i-1] + nums[i];
            }
        }
        return prefix;
    }
};