class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        for(char x : s){               // loop tht iterates on string
            if(x == '(' || x== '{' || x== '['){
                st.push(x);                      // for opening brackets we push
            }
            else{
                if(st.empty()){
                    return false;
                }
                else{
                    if(x == ')' && st.top() != '('){
                        return false;
                    }
                    if(x == '}' && st.top() != '{'){
                        return false;
                    }
                    if(x == ']' && st.top() != '['){
                        return false;
                    }
                    st.pop();
                }
            }
        }
        return st.empty();  // returns a bool value, true if it has zero elements
    }
};