class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;int ans=0;  int maxFreq=0;
        vector <int> freq(26,0);
        for(int r=0;r<s.size();r++){
            // when a new character enters (s[r])
            freq[s[r] - 'A']++;
            maxFreq = max(maxFreq, freq[s[r]-'A']);
            while((r-l+1) - maxFreq > k){
                freq[s[l]-'A']--;
                l++;
            }
            ans = max(ans,(r-l+1)); // kyuki in the end toh max window size hi toh bataoge
        }
        return ans;
        
    }
};