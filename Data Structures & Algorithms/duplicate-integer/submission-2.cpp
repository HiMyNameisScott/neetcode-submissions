class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        unordered_map<int, int> vals;
        bool hasDup = false;

        for(int i = 0 ; i < nums.size() && !hasDup ; i++){
            if(vals.find(nums[i]) != vals.end()){
                hasDup = true;
            }
            vals.insert({nums[i], 1});

        }


        return hasDup;
    }
};