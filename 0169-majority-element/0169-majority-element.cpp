class Solution {
public:
    int majorityElement(vector <int> &nums){
        unordered_map <int,int> m;
        for(int val:nums){
            m[val]++;

            if(m[val]> nums.size()/2){
                return val;
            }
        }
        return -1;
    }      
};