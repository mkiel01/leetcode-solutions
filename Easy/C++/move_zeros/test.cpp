#include <iostream>
#include <vector>

using namespace std;


void moveZeros(vector<int>& nums) {
    int nonZeroIndex = 0;

    // Traverse the array to find non-zero elements
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            // Place non-zero elements at the appropriate position
            nums[nonZeroIndex] = nums[i];
            nonZeroIndex++;
        }
    }

    // Fill the remaining elements with zeros
    while (nonZeroIndex < nums.size()) {
        nums[nonZeroIndex] = 0;
        nonZeroIndex++;
    }
}

int main() {
    vector<int> nums = {0, 0, 0, 0, 3, 12};
    moveZeros(nums);

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}

//
//    nums.erase(nums.begin() + 0);
//
//    while (i <= nums.size() - 1) {
//        if (nums[i] == 0) {
//            nums.erase(nums.begin() + i);
//            nums.push_back(0);
//
//            cout << "first loop" << endl;
//
//            for (int j = 0; j < nums.size(); j++) {
//                cout << nums[j] << " ";
//            }
//            cout << "\n";
//            i++;
//            if (nums[i - 1] == 0) {
//                cout << "first loop x2" << endl;
//
//                nums.erase(nums.begin() + i - 1);
//                nums.push_back(0);
//                i++;
//            }
//        } else {
//            cout << "secound loop" << endl;
//            i++;
//
//            for (int j = 0; j < nums.size(); j++) {
//                cout << nums[j] << " ";
//            }
//
//            cout << "\n";
//        }
//
//}
//    cout << "exit of while loop" << endl;
//
//    cout << "finall" << endl;
//
//    for (int j = 0; j < nums.size(); j++){
//    cout << nums[j] << " ";
//        }
//        return 0;


