class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool out = false;
        for (int i=0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums [j]){
                    out = true;
                }
            }
        }

        return out;
    }
};