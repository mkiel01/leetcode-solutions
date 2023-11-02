#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4};
    int n = nums.size();
    vector<int> ans(n);
    vector<int> left_Product(n);
    vector<int> right_Product(n);
    left_Product[0] = 1;
    for (int i = 1; i < n; i++) {
        left_Product[i] = left_Product[i - 1] * nums[i - 1];
    }

    cout << "left product: " << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << left_Product[i] << " ";

    }
    right_Product[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--) {
        right_Product[i] = right_Product[i + 1] * nums[i + 1];
    }
    cout << endl;

    cout << "right product: " << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << right_Product[i] << " ";

    }
    for (int i = 0; i < n; i++) {
        ans[i] = left_Product[i] * right_Product[i];
    }
    cout << endl;

    cout << "ans: " << endl;

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";

    }
};