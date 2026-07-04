class Solution {
public:
    bool isAnagram(string s, string t) {
        string answer = "";

        if (s.size() != t.size()){
            return false;
        }

        // Count the number of occurrences of a letter
        // Check if the other string has the same number of that letter

        int s_chars = 0;
        int t_chars = 0;

        for ( int i = 0 ; i < s.size() ; i++){

            for (int j = 0 ; j < s.size() ; j++){
                if (s.at(i) == s.at(j)){
                    s_chars++;
                }
            }

            for (int k = 0 ; k < s.size() ; k++){
                if (t.at(k) == s.at(i) ){
                    t_chars++;
                }
            }

            if (s_chars != t_chars){
                return false;
            }
        }

        return true;
    }
};
