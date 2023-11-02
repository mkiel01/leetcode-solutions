class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int maxFreq;
        int mostFrequentElement = -1; // Variable to store the most frequent element
        unordered_map<int, int> count;
        vector<int> ans;



        for (auto nr: nums) {
            count[nr]++;
        }

        for (int i = 0; i < k; i++) {
            for (auto pair: count) {
                if (pair.second > maxFreq) {
                    maxFreq = pair.second;
                    mostFrequentElement = pair.first;
                }
            }
            ans.push_back(mostFrequentElement);
            count.erase(mostFrequentElement);
            maxFreq = -1;
        }
        return ans;
    }
};