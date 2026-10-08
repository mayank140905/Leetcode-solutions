class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low=0 ;int high = 0; int res = 0;
        int n = s.size();
        unordered_map <int,int> f;
        for(int high =0; high<n; high++){
            f[s[high]]++;
            int k = high - low +1; // info can be both wrong and right, so we need to check first 
            // and k can never be greater than size of substring/array
            while(f.size()< k){
                f[s[low]]--;
                if(f[s[low]]==0){
                    f.erase(s[low]);
                }
                low++;
                k = high - low +1;     // recalculate size of window becuz we increased low
            }
            int len = high - low +1;
            res = max(len,res);
        }
        return res;
    }
};