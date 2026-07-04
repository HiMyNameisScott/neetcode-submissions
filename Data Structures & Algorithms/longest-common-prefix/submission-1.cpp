class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        
        sort(strs.begin(), strs.end(), [](const std::string& a, const std::string& b){
            return (a.length() < b.length());
        });

        // a[0] == the shortest string, so we only need to check up to the size of this
        // check a[0], and for every other word in the array we will check a[0][j]
        // against a[n][j], once there is a != we are done, if they are all == then push_back
        // and return;

        string ans = "";
        bool done = false;

        for(int i = 0 ; i < strs[0].size() && !done ; i++){
            for(int j = 1 ; j < strs.size() && !done ; j++ ){
                if(strs[0][i] != strs[j][i]){
                    done = true;
                }
            }

            if(!done){
                ans.push_back(strs[0][i]);
            }
        }

        return ans;
    }
};