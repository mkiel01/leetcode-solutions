class Solution {
public:
    bool isAnagram(string s, string t) {

        bool out = false;
        unordered_map<char, int> seen;
        unordered_map<char, int> seen2;
        for (auto letter: t) {
            seen[letter]++;
        }
        for (auto letter: s) {
            seen2[letter]++;
        }


        if (s.size() == t.size()){
            for (int letter: s) {

                if (seen[letter] && seen2[letter] >= 1 ){
                    cout<< seen[letter] << " = " << seen2[letter] << endl;
                    out = true;
                    seen[letter]--;
                    seen2[letter]--;
                }
                else{
                    cout << "flase" << seen[letter] << " = " << seen2[letter] << endl;

                    out = false;
                    break;
                }
            }
        }
        else{
            out = false;
        }

        return out;
    }

};