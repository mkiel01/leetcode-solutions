#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        string number;
        vector<int> final_vector;

        for (int i = 0; i < digits.size(); i++) {
            number += to_string(digits[i]);
        }

        long long int final_number = stoi(number);
        final_number += 1;

        number = to_string(final_number);

        for (int j = 0; j < number.length(); j++) {
            final_vector.push_back(number[j] - '0');
        }

        return final_vector;
    }
};
