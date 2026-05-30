class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l=0;
    // build freq 1

        vector <int> freq1(26,0);
        vector <int> freq2(26,0);
        for(char ch:s1){
            freq1[ch-'a']++;
        }


       for(int r=0; r<s2.size();r++){
            freq2[s2[r]-'a']++;
            

            // if window too large
            if((r-l+1) > s1.size()){
                freq2[s2[l]-'a']--;
                l++;
            }
            if((r-l+1) == s1.size()){
                if(freq1==freq2){
                    return true;
                }
            }


       } 
       return false;

    }
};