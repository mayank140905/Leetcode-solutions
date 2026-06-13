class Solution {
public:
    bool isAnagram(string s, string t) {
        vector <int> freq1(26,0);
        vector <int> freq2(26,0);
        if (s.size()!= t.size()){
            return false;
        }
        else{
            for(int i=0; i<s.size();i++){
                freq1[s[i]-'a']++;
            }
            for(int j=0; j<t.size();j++){
                freq2[t[j]-'a']++;
            }
            if(freq1==freq2){
                return true;
            }
            else{
                return false;
            }
        }
    }
};