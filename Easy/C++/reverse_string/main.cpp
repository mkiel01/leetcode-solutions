class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> new_s;
        for (int i = s.size() - 1 ; i <= s.size(); i--){


            cout << s[i] << " ";
            new_s.push_back(s[i]);

        }
        s.clear();

        s = new_s;
    }
};