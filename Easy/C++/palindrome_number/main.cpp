class Solution {
public:
    bool isPalindrome(int x) {

        bool result = true;
        string y;
        y = to_string(x);
        int j;

        j = y.length() - 1;

        for (int i = 0; i < y.length(); i++) {

            if (y[i] == y[j]) {
                j--;
            } else {
                result = false;
                break;
            }
        }
        return result;

    }
};