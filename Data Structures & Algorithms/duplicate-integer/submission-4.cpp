class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> nummies;

        for (int i = 0 ; i < nums.size() ; i++){
            if (nummies.find(nums[i]) == nummies.end()){
                nummies.insert({nums[i], 1});
            } else {
                return true;
            }
        }
        return false;
    }
    
};