class Solution {
public:
    bool isValid(string s) {
        bool closed = true;
        stack<char> c;
        
        for (int i = 0 ; i < s.size() ; i++){
            if ( s[i] == '}'){
                if (c.empty() || c.top() != '{'){
                    return false;
                } else {
                    c.pop();
                }
            } else if (s[i] == ']'){
                if(c.empty() || c.top() != '['){
                    return false;
                } else {
                    c.pop();
                }
            } else if (s[i] == ')'){
                if(c.empty() || c.top() != '('){
                    return false;
                } else {
                    c.pop();
                }
            } else {
                c.push(s[i]);
            }
        }

        if (!c.empty()){
            closed = false;
        }

        return closed;    

    }
};
