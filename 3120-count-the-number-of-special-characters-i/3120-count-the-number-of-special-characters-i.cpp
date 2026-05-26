class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set <char> lower,upper;
        int count = 0;

        for(char ch:word){
            if(islower(ch)){
                lower.insert(ch);
            }
            else if(isupper(ch)){
                upper.insert(tolower(ch));
            }
        }
        
        for(char ch :lower){
            if(upper.count(ch)) {count++;}        //. count checks whether () exists in set 
        }

        return count;
        
    }
};