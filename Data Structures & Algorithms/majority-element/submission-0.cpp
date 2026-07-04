class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        size_t ans = 0;

        for(int i = 0 ; i < nums.size() ; i++){
            freq[nums[i]]++;
        }

        int m_count = 0;
        int m_key = 0;

        for(auto [key, count] : freq){
            if (count > m_count){
                m_count = count;
                m_key = key;
            }
        }



        return m_key;
    }
};