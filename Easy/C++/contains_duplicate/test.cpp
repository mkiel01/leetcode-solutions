

#include <iostream>
using namespace std;
int main() {
    vector<int> nums = {1,2,3,1};
    unordered_map<int, int> seen;
    for (int num : nums) {
        if (seen[num] >= 1)
            return true;
        seen[num]++;
    }
    return false;
}



