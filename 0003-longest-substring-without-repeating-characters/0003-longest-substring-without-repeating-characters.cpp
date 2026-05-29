class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0; int r=0;
        int length=0;
        unordered_set <char> st;
        while(r<s.size()){
        
            if(!st.count(s[r])){
            st.insert(s[r]);
            length = max(length,r-l+1);
            r++;
            }
            else{ // if already present, window becomes invalid
            while(st.count(s[r])){
                st.erase(s[l]);
                l++;
            }}
        }
        return length;

    }
};