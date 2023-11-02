class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 0;
        int curr_max_count = 0;

        for (int i = 0; i < nums.size() - 1; i++) {
            if(nums[i + 1] > nums[i] && nums[i + 1] - nums[i] == 1){
                count += 1;

            }
            else {
                if (count > curr_max_count) {
                    curr_max_count = count;
                }
                count = 0;
            }
        }
        if (count > curr_max_count) {
            curr_max_count = count;
        }

        return curr_max_count + 1;
    }
};