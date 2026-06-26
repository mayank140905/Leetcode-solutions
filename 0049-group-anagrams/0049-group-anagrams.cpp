#pragma GCC optimize("Ofast")
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // we will use hashmap for this problem since, we will be grping
        unordered_map <string, vector<string> > map;
        // key , string = sorted string
        // value, us key wale saare anagrams 

        // first we need to go through all strings and grp them
        for(string s : strs){
            string temp = s;
            sort(temp.begin(),temp.end());
            
            map[temp].push_back(s);
        }
        vector <vector <string>> ans;

        for( auto &it:map){
            ans.push_back(it.second);
        }
        return ans;
    }
};